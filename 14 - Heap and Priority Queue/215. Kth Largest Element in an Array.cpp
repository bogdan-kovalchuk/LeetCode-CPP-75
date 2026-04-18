#include "../leetcode_test.hpp"

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{3, 2, 1, 5, 6, 4};
        int k = 2;
        int actual = solution.findKthLargest(nums, k);
        int expected = 5;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{3, 2, 3, 1, 2, 4, 5, 5, 6};
        int k = 4;
        int actual = solution.findKthLargest(nums, k);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
