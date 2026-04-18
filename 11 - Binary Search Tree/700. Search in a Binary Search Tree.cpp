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
    TreeNode* searchBST(TreeNode* root, int val) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{4, 2, 7, 1, 3});
        int val = 2;
        TreeNode* actual = solution.searchBST(root, val);
        auto expectedLevelOrder = vector<optional<int>>{2, 1, 3};
        leetcode::expectEqual(leetcode::treeToLevelOrder(actual), expectedLevelOrder, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{4, 2, 7, 1, 3});
        int val = 5;
        TreeNode* actual = solution.searchBST(root, val);
        auto expectedLevelOrder = vector<optional<int>>{};
        leetcode::expectEqual(leetcode::treeToLevelOrder(actual), expectedLevelOrder, "Example 2");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
