#include "../leetcode_test.hpp"

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string text1 = "abcde";
        string text2 = "ace";
        int actual = solution.longestCommonSubsequence(text1, text2);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string text1 = "abc";
        string text2 = "abc";
        int actual = solution.longestCommonSubsequence(text1, text2);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string text1 = "abc";
        string text2 = "def";
        int actual = solution.longestCommonSubsequence(text1, text2);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
