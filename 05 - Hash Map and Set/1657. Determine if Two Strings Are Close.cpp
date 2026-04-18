#include "../leetcode_test.hpp"

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string word1 = "abc";
        string word2 = "bca";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string word1 = "a";
        string word2 = "aa";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string word1 = "cabbba";
        string word2 = "abbccc";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
