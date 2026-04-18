#include "../leetcode_test.hpp"

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> cost = vector<int>{10, 15, 20};
        int actual = solution.minCostClimbingStairs(cost);
        int expected = 15;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> cost = vector<int>{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
        int actual = solution.minCostClimbingStairs(cost);
        int expected = 6;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
