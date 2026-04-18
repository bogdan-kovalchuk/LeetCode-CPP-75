#include "../leetcode_test.hpp"

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int n = 6;
        vector<vector<int>> connections = vector<vector<int>>{vector<int>{0, 1}, vector<int>{1, 3}, vector<int>{2, 3}, vector<int>{4, 0}, vector<int>{4, 5}};
        int actual = solution.minReorder(n, connections);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int n = 5;
        vector<vector<int>> connections = vector<vector<int>>{vector<int>{1, 0}, vector<int>{1, 2}, vector<int>{3, 2}, vector<int>{3, 4}};
        int actual = solution.minReorder(n, connections);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        int n = 3;
        vector<vector<int>> connections = vector<vector<int>>{vector<int>{1, 0}, vector<int>{2, 0}};
        int actual = solution.minReorder(n, connections);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
