#include "../leetcode_test.hpp"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
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
