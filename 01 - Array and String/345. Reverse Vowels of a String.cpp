#include "../leetcode_test.hpp"

class Solution {
public:
    string reverseVowels(string s) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
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
