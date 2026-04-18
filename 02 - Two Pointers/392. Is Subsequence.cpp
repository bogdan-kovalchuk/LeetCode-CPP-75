#include "../leetcode_test.hpp"

class Solution {
public:
    bool isSubsequence(string s, string t) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string s = "abc";
        string t = "ahbgdc";
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
