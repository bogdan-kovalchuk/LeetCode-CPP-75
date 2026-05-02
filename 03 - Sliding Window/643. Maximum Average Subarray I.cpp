#include "../leetcode_test.hpp"
#include <numeric>

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = std::accumulate(nums.begin(), nums.begin() + k, 0);
        int max_sum = sum;

        for (int i = k; i < static_cast<int>(nums.size()); ++i)
        {
            sum = sum - nums[i - k] + nums[i];
            max_sum = std::max(max_sum, sum);
        }

        return static_cast<double>(max_sum) / k;
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
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
