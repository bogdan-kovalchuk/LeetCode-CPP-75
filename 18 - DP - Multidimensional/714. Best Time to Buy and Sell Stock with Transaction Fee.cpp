#include "../leetcode_test.hpp"

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> prices = vector<int>{1, 3, 2, 8, 4, 9};
        int fee = 2;
        int actual = solution.maxProfit(prices, fee);
        int expected = 8;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> prices = vector<int>{1, 3, 7, 5, 10, 3};
        int fee = 3;
        int actual = solution.maxProfit(prices, fee);
        int expected = 6;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
