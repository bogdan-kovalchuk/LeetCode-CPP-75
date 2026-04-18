#include "../leetcode_test.hpp"

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> points = vector<vector<int>>{vector<int>{10, 16}, vector<int>{2, 8}, vector<int>{1, 6}, vector<int>{7, 12}};
        int actual = solution.findMinArrowShots(points);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> points = vector<vector<int>>{vector<int>{1, 2}, vector<int>{3, 4}, vector<int>{5, 6}, vector<int>{7, 8}};
        int actual = solution.findMinArrowShots(points);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<vector<int>> points = vector<vector<int>>{vector<int>{1, 2}, vector<int>{2, 3}, vector<int>{3, 4}, vector<int>{4, 5}};
        int actual = solution.findMinArrowShots(points);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
