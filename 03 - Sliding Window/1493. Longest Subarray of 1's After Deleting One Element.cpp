#include "../leetcode_test.hpp"

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 1, 0, 1};
        int actual = solution.longestSubarray(nums);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{0, 1, 1, 1, 0, 1, 1, 0, 1};
        int actual = solution.longestSubarray(nums);
        int expected = 5;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{1, 1, 1};
        int actual = solution.longestSubarray(nums);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
