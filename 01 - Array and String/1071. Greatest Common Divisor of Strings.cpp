#include "../leetcode_test.hpp"

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string str1 = "ABCABC";
        string str2 = "ABC";
        string actual = solution.gcdOfStrings(str1, str2);
        string expected = "ABC";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string str1 = "ABABAB";
        string str2 = "ABAB";
        string actual = solution.gcdOfStrings(str1, str2);
        string expected = "AB";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string str1 = "LEET";
        string str2 = "CODE";
        string actual = solution.gcdOfStrings(str1, str2);
        string expected = "";
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    {
        Solution solution;
        string str1 = "AAAAAB";
        string str2 = "AAA";
        string actual = solution.gcdOfStrings(str1, str2);
        string expected = "";
        leetcode::expectEqual(actual, expected, "Example 4");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
