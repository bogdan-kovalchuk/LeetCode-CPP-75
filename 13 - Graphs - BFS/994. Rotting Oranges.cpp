#include "../leetcode_test.hpp"

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> grid = vector<vector<int>>{vector<int>{2, 1, 1}, vector<int>{1, 1, 0}, vector<int>{0, 1, 1}};
        int actual = solution.orangesRotting(grid);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> grid = vector<vector<int>>{vector<int>{2, 1, 1}, vector<int>{0, 1, 1}, vector<int>{1, 0, 1}};
        int actual = solution.orangesRotting(grid);
        int expected = -1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<vector<int>> grid = vector<vector<int>>{vector<int>{0, 2}};
        int actual = solution.orangesRotting(grid);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
