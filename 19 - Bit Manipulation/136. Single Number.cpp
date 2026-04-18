#include "../leetcode_test.hpp"

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums = vector<int>{2, 2, 1};
        int actual = solution.singleNumber(nums);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{4, 1, 2, 1, 2};
        int actual = solution.singleNumber(nums);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> nums = vector<int>{1};
        int actual = solution.singleNumber(nums);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
