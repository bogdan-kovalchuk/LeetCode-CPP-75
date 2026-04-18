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
    int longestZigZag(TreeNode* root) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, nullopt, 1, 1, 1, nullopt, nullopt, 1, 1, nullopt, 1, nullopt, nullopt, nullopt, 1});
        int actual = solution.longestZigZag(root);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, 1, 1, nullopt, 1, nullopt, nullopt, 1, 1, nullopt, 1});
        int actual = solution.longestZigZag(root);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1});
        int actual = solution.longestZigZag(root);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
