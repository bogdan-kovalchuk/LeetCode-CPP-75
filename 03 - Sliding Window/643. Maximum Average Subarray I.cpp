#include "../leetcode_test.hpp"

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 12, -5, -6, 50, 3};
        int k = 4;
        double actual = solution.findMaxAverage(nums, k);
        double expected = 12.75;
        leetcode::expectNear(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{5};
        int k = 1;
        double actual = solution.findMaxAverage(nums, k);
        double expected = 5.0;
        leetcode::expectNear(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
