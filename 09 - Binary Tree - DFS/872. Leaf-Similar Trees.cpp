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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root1 = leetcode::makeTree(vector<optional<int>>{3, 5, 1, 6, 2, 9, 8, nullopt, nullopt, 7, 4});
        TreeNode* root2 = leetcode::makeTree(vector<optional<int>>{3, 5, 1, 6, 7, 4, 2, nullopt, nullopt, nullopt, nullopt, nullopt, nullopt, 9, 8});
        bool actual = solution.leafSimilar(root1, root2);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyTree(root1);
        leetcode::destroyTree(root2);
    }

    {
        Solution solution;
        TreeNode* root1 = leetcode::makeTree(vector<optional<int>>{1, 2, 3});
        TreeNode* root2 = leetcode::makeTree(vector<optional<int>>{1, 3, 2});
        bool actual = solution.leafSimilar(root1, root2);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyTree(root1);
        leetcode::destroyTree(root2);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
