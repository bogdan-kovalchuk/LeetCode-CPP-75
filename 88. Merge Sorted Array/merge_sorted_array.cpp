// Source : https://leetcode.com/problems/merge-sorted-array/
// Author : Bogdan Kovalchuk
// Date   : 2020-10-22

/**
 * Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
 * 
 * Note:
 *   The number of elements initialized in nums1 and nums2 are m and n respectively.
 *   You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.
 * 
 * Example:
 *   Input:
 *   nums1 = [1,2,3,0,0,0], m = 3
 *   nums2 = [2,5,6],       n = 3
 * 
 *   Output: [1,2,2,3,5,6]
 * 
 * Constraints:
 *   -10^9 <= nums1[i], nums2[i] <= 10^9
 *   nums1.length == m + n
 *   nums2.length == n
 **/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        vector<int> res;

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
            }
            else
            {
                res.push_back(nums2[j]);
                j++;
            }
        }

        if (i != m)
        {
            for (; i < m; ++i)
            {
                res.push_back(nums1[i]);
            }
        }

        if (j != n)
        {
            for (; j < n; ++j)
            {
                res.push_back(nums2[j]);
            }
        }

        nums1 = res;
    }
};

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    Solution solution;
    solution.merge(nums1, 3, nums2, 3);

    for (int i = 0; i < nums1.size(); ++i)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}
