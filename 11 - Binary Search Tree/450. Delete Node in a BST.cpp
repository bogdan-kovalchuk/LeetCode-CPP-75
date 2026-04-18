#include "../leetcode_test.hpp"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{5, 3, 6, 2, 4, nullopt, 7});
        int key = 3;
        TreeNode* actual = solution.deleteNode(root, key);
        auto expectedLevelOrder = vector<optional<int>>{5, 4, 6, 2, nullopt, nullopt, 7};
        TreeNode* expectedTree = leetcode::makeTree(expectedLevelOrder);
        leetcode::expectEqual(leetcode::treeInorder(actual), leetcode::treeInorder(expectedTree), "Example 1 inorder");
        leetcode::expectTrue(leetcode::isValidBST(actual), "Example 1 bst");
        leetcode::destroyTree(actual);
        leetcode::destroyTree(expectedTree);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{5, 3, 6, 2, 4, nullopt, 7});
        int key = 0;
        TreeNode* actual = solution.deleteNode(root, key);
        auto expectedLevelOrder = vector<optional<int>>{5, 3, 6, 2, 4, nullopt, 7};
        TreeNode* expectedTree = leetcode::makeTree(expectedLevelOrder);
        leetcode::expectEqual(leetcode::treeInorder(actual), leetcode::treeInorder(expectedTree), "Example 2 inorder");
        leetcode::expectTrue(leetcode::isValidBST(actual), "Example 2 bst");
        leetcode::destroyTree(actual);
        leetcode::destroyTree(expectedTree);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{});
        int key = 0;
        TreeNode* actual = solution.deleteNode(root, key);
        auto expectedLevelOrder = vector<optional<int>>{};
        TreeNode* expectedTree = leetcode::makeTree(expectedLevelOrder);
        leetcode::expectEqual(leetcode::treeInorder(actual), leetcode::treeInorder(expectedTree), "Example 3 inorder");
        leetcode::expectTrue(leetcode::isValidBST(actual), "Example 3 bst");
        leetcode::destroyTree(actual);
        leetcode::destroyTree(expectedTree);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
