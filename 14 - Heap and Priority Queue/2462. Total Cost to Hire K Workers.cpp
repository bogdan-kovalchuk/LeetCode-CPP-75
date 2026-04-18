#include "../leetcode_test.hpp"

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> costs = vector<int>{17, 12, 10, 2, 7, 2, 11, 20, 8};
        int k = 3;
        int candidates = 4;
        long long actual = solution.totalCost(costs, k, candidates);
        long long expected = 11LL;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> costs = vector<int>{1, 2, 4, 1};
        int k = 3;
        int candidates = 3;
        long long actual = solution.totalCost(costs, k, candidates);
        long long expected = 4LL;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
