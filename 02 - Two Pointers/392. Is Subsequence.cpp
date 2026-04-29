#include "../leetcode_test.hpp"

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0;
        for (int j = 0; j < t.length() && i < s.length(); j++)
        {
            if (t[j] == s[i])
                i++;
        }

        return i == s.length();
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        string s = "abc";
        string t = "tvkahbgdc";
        bool actual = solution.isSubsequence(s, t);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string s = "axc";
        string t = "ahbgdc";
        bool actual = solution.isSubsequence(s, t);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
