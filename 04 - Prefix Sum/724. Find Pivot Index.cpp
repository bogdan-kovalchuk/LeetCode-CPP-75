#include "../leetcode_test.hpp"

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{1, 7, 3, 6, 5, 6};
        int actual = solution.pivotIndex(nums);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{1, 2, 3};
        int actual = solution.pivotIndex(nums);
        int expected = -1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{2, 1, -1};
        int actual = solution.pivotIndex(nums);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
