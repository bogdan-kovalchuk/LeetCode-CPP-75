#include "../leetcode_test.hpp"

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
        int k = 2;
        int actual = solution.longestOnes(nums, k);
        int expected = 6;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
        int k = 3;
        int actual = solution.longestOnes(nums, k);
        int expected = 10;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
