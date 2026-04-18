#include "../leetcode_test.hpp"

class Solution {
public:
    string reverseWords(string s) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string s = "the sky is blue";
        string actual = solution.reverseWords(s);
        string expected = "blue is sky the";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string s = "  hello world  ";
        string actual = solution.reverseWords(s);
        string expected = "world hello";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string s = "a good   example";
        string actual = solution.reverseWords(s);
        string expected = "example good a";
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
