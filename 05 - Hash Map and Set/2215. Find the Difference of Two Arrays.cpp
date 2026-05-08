#include "../leetcode_test.hpp"
#include <unordered_set>

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<vector<int>> result(2);

        for (const auto &num : set1)
            if (set2.find(num) == set2.end())
                result[0].push_back(num);

        for (const auto &num : set2)
            if (set1.find(num) == set1.end())
                result[1].push_back(num);

        return result;
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        vector<int> nums1 = vector<int>{1, 2, 3};
        vector<int> nums2 = vector<int>{2, 4, 6};
        vector<vector<int>> actual = solution.findDifference(nums1, nums2);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{1, 3}, vector<int>{4, 6}};
        for (auto &values : actual)
            sort(values.begin(), values.end());
        for (auto &values : expected)
            sort(values.begin(), values.end());
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> nums1 = vector<int>{1, 2, 3, 3};
        vector<int> nums2 = vector<int>{1, 1, 2, 2};
        vector<vector<int>> actual = solution.findDifference(nums1, nums2);
        vector<vector<int>> expected = vector<vector<int>>{vector<int>{3}, vector<int>{}};
        for (auto &values : actual)
            sort(values.begin(), values.end());
        for (auto &values : expected)
            sort(values.begin(), values.end());
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
