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
    ListNode* deleteMiddle(ListNode* head) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{1, 3, 4, 7, 1, 2, 6});
        ListNode* actual = solution.deleteMiddle(head);
        vector<int> expected = vector<int>{1, 3, 4, 1, 2, 6};
        leetcode::expectEqual(leetcode::listToVector(actual), expected, "Example 1");
        if (actual != nullptr) {
            leetcode::destroyList(actual);
        } else {
            leetcode::destroyList(head);
        }
    }

    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{1, 2, 3, 4});
        ListNode* actual = solution.deleteMiddle(head);
        vector<int> expected = vector<int>{1, 2, 4};
        leetcode::expectEqual(leetcode::listToVector(actual), expected, "Example 2");
        if (actual != nullptr) {
            leetcode::destroyList(actual);
        } else {
            leetcode::destroyList(head);
        }
    }

    {
        Solution solution;
        ListNode* head = leetcode::makeList(vector<int>{2, 1});
        ListNode* actual = solution.deleteMiddle(head);
        vector<int> expected = vector<int>{2};
        leetcode::expectEqual(leetcode::listToVector(actual), expected, "Example 3");
        if (actual != nullptr) {
            leetcode::destroyList(actual);
        } else {
            leetcode::destroyList(head);
        }
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
