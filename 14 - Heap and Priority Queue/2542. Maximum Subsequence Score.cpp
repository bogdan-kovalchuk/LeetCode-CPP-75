#include "../leetcode_test.hpp"

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums1 = vector<int>{1, 3, 3, 2};
        vector<int> nums2 = vector<int>{2, 1, 3, 4};
        int k = 3;
        long long actual = solution.maxScore(nums1, nums2, k);
        long long expected = 12LL;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums1 = vector<int>{4, 2, 3, 1, 1};
        vector<int> nums2 = vector<int>{7, 5, 10, 9, 6};
        int k = 1;
        long long actual = solution.maxScore(nums1, nums2, k);
        long long expected = 30LL;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
