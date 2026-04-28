#include "../leetcode_test.hpp"

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        vector<int> nums = vector<int>{0, 1, 0, 3, 12};
        solution.moveZeroes(nums);
        vector<int> expected = vector<int>{1, 3, 12, 0, 0};
        leetcode::expectEqual(nums, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{0};
        solution.moveZeroes(nums);
        vector<int> expected = vector<int>{0};
        leetcode::expectEqual(nums, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
