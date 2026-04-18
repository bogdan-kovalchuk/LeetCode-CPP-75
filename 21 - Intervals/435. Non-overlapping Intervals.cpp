#include "../leetcode_test.hpp"

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> intervals = vector<vector<int>>{vector<int>{1, 2}, vector<int>{2, 3}, vector<int>{3, 4}, vector<int>{1, 3}};
        int actual = solution.eraseOverlapIntervals(intervals);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> intervals = vector<vector<int>>{vector<int>{1, 2}, vector<int>{1, 2}, vector<int>{1, 2}};
        int actual = solution.eraseOverlapIntervals(intervals);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<vector<int>> intervals = vector<vector<int>>{vector<int>{1, 2}, vector<int>{2, 3}};
        int actual = solution.eraseOverlapIntervals(intervals);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
