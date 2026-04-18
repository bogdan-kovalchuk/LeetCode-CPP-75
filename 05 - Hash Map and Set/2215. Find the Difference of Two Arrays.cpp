#include "../leetcode_test.hpp"

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> nums1 = vector<int>{1, 2, 3};
        vector<int> nums2 = vector<int>{2, 4, 6};
        vector<vector<int>> actual = solution.findDifference(nums1, nums2);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}};
        for (auto &values : actual) sort(values.begin(), values.end());
        for (auto &values : expected) sort(values.begin(), values.end());
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums1 = vector<int>{1, 2, 3, 3};
        vector<int> nums2 = vector<int>{1, 1, 2, 2};
        vector<vector<int>> actual = solution.findDifference(nums1, nums2);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{3}, vector<int>{}};
        for (auto &values : actual) sort(values.begin(), values.end());
        for (auto &values : expected) sort(values.begin(), values.end());
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
