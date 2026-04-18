#include "../leetcode_test.hpp"

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<char>> maze = vector<vector<char>>{vector<char>{'+', '+', '.', '+'}, vector<char>{'.', '.', '.', '+'}, vector<char>{'+', '+', '+', '.'}};
        vector<int> entrance = vector<int>{1, 2};
        int actual = solution.nearestExit(maze, entrance);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<char>> maze = vector<vector<char>>{vector<char>{'+', '+', '+'}, vector<char>{'.', '.', '.'}, vector<char>{'+', '+', '+'}};
        vector<int> entrance = vector<int>{1, 0};
        int actual = solution.nearestExit(maze, entrance);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<vector<char>> maze = vector<vector<char>>{vector<char>{'.', '+'}};
        vector<int> entrance = vector<int>{0, 0};
        int actual = solution.nearestExit(maze, entrance);
        int expected = -1;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
