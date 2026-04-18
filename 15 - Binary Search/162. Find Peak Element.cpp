#include "../leetcode_test.hpp"

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 2, 3, 1};
        int actual = solution.findPeakElement(nums);
        leetcode::expectTrue(actual >= 0 && actual < static_cast<int>(nums.size()), "Example 1 range");
        bool isPeak = (actual == 0 || nums[actual] > nums[actual - 1]) &&
                      (actual == static_cast<int>(nums.size()) - 1 || nums[actual] > nums[actual + 1]);
        leetcode::expectTrue(isPeak, "Example 1 peak");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{1, 2, 1, 3, 5, 6, 4};
        int actual = solution.findPeakElement(nums);
        leetcode::expectTrue(actual >= 0 && actual < static_cast<int>(nums.size()), "Example 2 range");
        bool isPeak = (actual == 0 || nums[actual] > nums[actual - 1]) &&
                      (actual == static_cast<int>(nums.size()) - 1 || nums[actual] > nums[actual + 1]);
        leetcode::expectTrue(isPeak, "Example 2 peak");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
