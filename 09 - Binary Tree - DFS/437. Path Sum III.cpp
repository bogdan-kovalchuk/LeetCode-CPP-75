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
    int pathSum(TreeNode* root, int targetSum) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{10, 5, -3, 3, 2, nullopt, 11, 3, -2, nullopt, 1});
        int targetSum = 8;
        int actual = solution.pathSum(root, targetSum);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{5, 4, 8, 11, nullopt, 13, 4, 7, 2, nullopt, nullopt, 5, 1});
        int targetSum = 22;
        int actual = solution.pathSum(root, targetSum);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
