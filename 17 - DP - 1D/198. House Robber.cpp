#include "../leetcode_test.hpp"

class Solution {
public:
    int rob(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 2, 3, 1};
        int actual = solution.rob(nums);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{2, 7, 9, 3, 1};
        int actual = solution.rob(nums);
        int expected = 12;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
