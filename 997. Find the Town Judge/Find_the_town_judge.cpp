#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findJudge(int N, vector<vector<int>> &trust)
    {
        return 1; 
    }
};

int main()
{

    int N = 4;
    vector<vector<int>> trust = {{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};

    Solution solution;
    cout << solution.findJudge(N, trust);

    return 0;
}