[CmdletBinding(DefaultParameterSetName = 'BuildActive')]
param(
    [Parameter(ParameterSetName = 'BuildActive', Mandatory = $true)]
    [Parameter(ParameterSetName = 'RunActive', Mandatory = $true)]
    [string]$SourceFile,

    [Parameter(ParameterSetName = 'BuildAll', Mandatory = $true)]
    [switch]$BuildAll,

    [Parameter(ParameterSetName = 'RunActive')]
    [switch]$Run
)

$ErrorActionPreference = 'Stop'

$workspaceRoot = Split-Path -Parent $PSScriptRoot
$buildRoot = Join-Path -Path $workspaceRoot -ChildPath '.build'
$vsDevCmd = 'C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\Tools\VsDevCmd.bat'

function Assert-VsDevCmdExists {
    if (-not (Test-Path -LiteralPath $vsDevCmd)) {
        throw "Visual Studio developer command script not found at '$vsDevCmd'."
    }
}

function Invoke-InVsDevCmd {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Command
    )

    Assert-VsDevCmdExists

    $wrappedCommand = "`"$vsDevCmd`" -arch=amd64 -host_arch=amd64 >nul && $Command"
    & cmd /d /c $wrappedCommand 2>&1 | ForEach-Object { $_ | Out-Host }

    return [int]$LASTEXITCODE
}

function Get-FullPath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    return [System.IO.Path]::GetFullPath($Path)
}

function Get-RelativeWorkspacePath {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    $fullPath = Get-FullPath -Path $Path
    $rootPath = Get-FullPath -Path $workspaceRoot
    $rootWithSeparator = $rootPath.TrimEnd('\') + '\'

    if (-not $fullPath.StartsWith($rootWithSeparator, [System.StringComparison]::OrdinalIgnoreCase)) {
        throw "Source file '$fullPath' is outside workspace '$workspaceRoot'."
    }

    return $fullPath.Substring($rootWithSeparator.Length)
}

function Get-BuildLayout {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    $sourcePath = Get-FullPath -Path $Path
    $relativePath = Get-RelativeWorkspacePath -Path $sourcePath

    $relativeDirectory = Split-Path -Parent $relativePath
    $baseName = [System.IO.Path]::GetFileNameWithoutExtension($sourcePath)

    if ([string]::IsNullOrWhiteSpace($relativeDirectory)) {
        $outputDirectory = $buildRoot
    }
    else {
        $outputDirectory = Join-Path -Path $buildRoot -ChildPath $relativeDirectory
    }

    return [pscustomobject]@{
        SourcePath   = $sourcePath
        RelativePath = $relativePath
        OutputDir    = $outputDirectory
        ObjectFile   = Join-Path -Path $outputDirectory -ChildPath ($baseName + '.obj')
        CompilerPdb  = Join-Path -Path $outputDirectory -ChildPath ($baseName + '.compile.pdb')
        ProgramPdb   = Join-Path -Path $outputDirectory -ChildPath ($baseName + '.pdb')
        ExeFile      = Join-Path -Path $outputDirectory -ChildPath ($baseName + '.exe')
    }
}

function Invoke-Build {
    param(
        [Parameter(Mandatory = $true)]
        [string]$Path
    )

    $layout = Get-BuildLayout -Path $Path
    New-Item -ItemType Directory -Force -Path $layout.OutputDir | Out-Null

    $baseName = [System.IO.Path]::GetFileNameWithoutExtension($layout.SourcePath)
    Get-ChildItem -LiteralPath $layout.OutputDir -File -ErrorAction SilentlyContinue |
        Where-Object { $_.BaseName -eq $baseName -or $_.BaseName -eq ($baseName + '.compile') } |
        Remove-Item -Force -ErrorAction SilentlyContinue

    Write-Host "Compiling $($layout.RelativePath)"

    $compilerCommand = @(
        'cl',
        '/nologo',
        '/std:c++17',
        '/EHsc',
        '/Zi',
        '/FS',
        '/DLOCAL_TEST',
        ('/Fo"{0}"' -f $layout.ObjectFile),
        ('/Fd"{0}"' -f $layout.CompilerPdb),
        ('/Fe"{0}"' -f $layout.ExeFile),
        ('"{0}"' -f $layout.SourcePath),
        '/link',
        '/DEBUG:FULL',
        ('/PDB:"{0}"' -f $layout.ProgramPdb)
    ) -join ' '

    $exitCode = Invoke-InVsDevCmd -Command $compilerCommand

    return [pscustomobject]@{
        ExitCode = $exitCode
        Layout   = $layout
    }
}

if ($BuildAll) {
    $sources = Get-ChildItem -Path $workspaceRoot -Recurse -Filter *.cpp -File |
        Where-Object { $_.FullName -notlike "$buildRoot*" } |
        Sort-Object FullName

    $failures = New-Object System.Collections.Generic.List[object]
    $successCount = 0

    foreach ($source in $sources) {
        $result = Invoke-Build -Path $source.FullName
        if ($result.ExitCode -eq 0) {
            $successCount += 1
        }
        else {
            $failures.Add($result)
        }
    }

    Write-Host
    Write-Host "Build summary: $successCount succeeded, $($failures.Count) failed."

    if ($failures.Count -gt 0) {
        Write-Host 'Failed files:'
        foreach ($failure in $failures) {
            Write-Host " - $($failure.Layout.RelativePath)"
        }
        exit 1
    }

    exit 0
}

$buildResult = Invoke-Build -Path $SourceFile
if ($buildResult.ExitCode -ne 0) {
    exit $buildResult.ExitCode
}

if ($Run) {
    Write-Host
    Write-Host "Running $($buildResult.Layout.ExeFile)"
    $runCommand = ('"{0}"' -f $buildResult.Layout.ExeFile)
    $runExitCode = Invoke-InVsDevCmd -Command $runCommand
    exit $runExitCode
}

exit 0
