#include "../leetcode_test.hpp"

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> grid = vector<vector<int>>{vector<int>{3, 2, 1}, vector<int>{1, 7, 6}, vector<int>{2, 7, 7}};
        int actual = solution.equalPairs(grid);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> grid = vector<vector<int>>{vector<int>{3, 1, 2, 2}, vector<int>{1, 4, 4, 5}, vector<int>{2, 4, 2, 2}, vector<int>{2, 4, 2, 2}};
        int actual = solution.equalPairs(grid);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
