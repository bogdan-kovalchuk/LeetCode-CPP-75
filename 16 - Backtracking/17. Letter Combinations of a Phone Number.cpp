#include "../leetcode_test.hpp"

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string digits = "23";
        vector<string> actual = solution.letterCombinations(digits);
        vector<string> expected = vector<string>{"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
        sort(actual.begin(), actual.end());
        sort(expected.begin(), expected.end());
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string digits = "2";
        vector<string> actual = solution.letterCombinations(digits);
        vector<string> expected = vector<string>{"a", "b", "c"};
        sort(actual.begin(), actual.end());
        sort(expected.begin(), expected.end());
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
