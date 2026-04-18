#include "../leetcode_test.hpp"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4});
        TreeNode* p = leetcode::findNode(root, 5);
        TreeNode* q = leetcode::findNode(root, 1);
        leetcode::expectTrue(p != nullptr && q != nullptr, "Example 1 setup");
        TreeNode* actual = solution.lowestCommonAncestor(root, p, q);
        leetcode::expectTrue(actual != nullptr, "Example 1 result");
        leetcode::expectEqual(actual->val, 3, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4});
        TreeNode* p = leetcode::findNode(root, 5);
        TreeNode* q = leetcode::findNode(root, 4);
        leetcode::expectTrue(p != nullptr && q != nullptr, "Example 2 setup");
        TreeNode* actual = solution.lowestCommonAncestor(root, p, q);
        leetcode::expectTrue(actual != nullptr, "Example 2 result");
        leetcode::expectEqual(actual->val, 5, "Example 2");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, 2});
        TreeNode* p = leetcode::findNode(root, 1);
        TreeNode* q = leetcode::findNode(root, 2);
        leetcode::expectTrue(p != nullptr && q != nullptr, "Example 3 setup");
        TreeNode* actual = solution.lowestCommonAncestor(root, p, q);
        leetcode::expectTrue(actual != nullptr, "Example 3 result");
        leetcode::expectEqual(actual->val, 1, "Example 3");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
