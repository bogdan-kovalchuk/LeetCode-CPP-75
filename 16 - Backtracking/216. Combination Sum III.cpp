#include "../leetcode_test.hpp"

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int k = 3;
        int n = 7;
        vector<vector<int>> actual = solution.combinationSum3(k, n);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{1, 2, 4}};
        for (auto &combination : actual) sort(combination.begin(), combination.end());
        for (auto &combination : expected) sort(combination.begin(), combination.end());
        sort(actual.begin(), actual.end());
        sort(expected.begin(), expected.end());
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int k = 3;
        int n = 9;
        vector<vector<int>> actual = solution.combinationSum3(k, n);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{1, 2, 6}, vector<int>{1, 3, 5}, vector<int>{2, 3, 4}};
        for (auto &combination : actual) sort(combination.begin(), combination.end());
        for (auto &combination : expected) sort(combination.begin(), combination.end());
        sort(actual.begin(), actual.end());
        sort(expected.begin(), expected.end());
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        int k = 4;
        int n = 1;
        vector<vector<int>> actual = solution.combinationSum3(k, n);
        vector<vector<int>> expected = vector<vector<int>>{};
        for (auto &combination : actual) sort(combination.begin(), combination.end());
        for (auto &combination : expected) sort(combination.begin(), combination.end());
        sort(actual.begin(), actual.end());
        sort(expected.begin(), expected.end());
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
