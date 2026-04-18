#include "../leetcode_test.hpp"

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 2, 3, 4};
        vector<int> actual = solution.productExceptSelf(nums);
        vector<int> expected = vector<int>{24, 12, 8, 6};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{-1, 1, 0, -3, 3};
        vector<int> actual = solution.productExceptSelf(nums);
        vector<int> expected = vector<int>{0, 0, 9, 0, 0};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
