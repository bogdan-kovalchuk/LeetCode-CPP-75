#include "../leetcode_test.hpp"

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> isConnected = vector<vector<int>>{vector<int>{1, 1, 0}, vector<int>{1, 1, 0}, vector<int>{0, 0, 1}};
        int actual = solution.findCircleNum(isConnected);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> isConnected = vector<vector<int>>{vector<int>{1, 0, 0}, vector<int>{0, 1, 0}, vector<int>{0, 0, 1}};
        int actual = solution.findCircleNum(isConnected);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
