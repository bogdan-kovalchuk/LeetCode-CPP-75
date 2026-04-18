#include "../leetcode_test.hpp"

class Solution {
public:
    string decodeString(string s) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string s = "3[a]2[bc]";
        string actual = solution.decodeString(s);
        string expected = "aaabcbc";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string s = "3[a2[c]]";
        string actual = solution.decodeString(s);
        string expected = "accaccacc";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string s = "2[abc]3[cd]ef";
        string actual = solution.decodeString(s);
        string expected = "abcabccdcdcdef";
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
