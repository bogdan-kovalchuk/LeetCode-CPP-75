#include "../leetcode_test.hpp"

class Solution
{
public:
    bool isVowel(char c)
    {
        c = std::tolower(static_cast<unsigned char>(c));
        return string("aeiou").find(c) != string::npos;
    }

    string reverseVowels(string s)
    {
        int i = 0;
        int j = static_cast<int>(s.size()) - 1;

        while (i < j)
        {
            while (i < j && !isVowel(s[i]))
                i++;

            while (i < j && !isVowel(s[j]))
                j--;

            if (i < j)
            {
                std::swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        string s = "IceCreAm";
        string actual = solution.reverseVowels(s);
        string expected = "AceCreIm";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string s = "leetcode";
        string actual = solution.reverseVowels(s);
        string expected = "leotcede";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
