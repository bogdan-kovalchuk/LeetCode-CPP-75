#include "../leetcode_test.hpp"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{5, 4, 2, 1});
        int actual = solution.pairSum(head);
        int expected = 6;
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyList(head);
    }

    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{4, 2, 2, 3});
        int actual = solution.pairSum(head);
        int expected = 7;
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyList(head);
    }

    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{1, 100000});
        int actual = solution.pairSum(head);
        int expected = 100001;
        leetcode::expectEqual(actual, expected, "Example 3");
        leetcode::destroyList(head);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
