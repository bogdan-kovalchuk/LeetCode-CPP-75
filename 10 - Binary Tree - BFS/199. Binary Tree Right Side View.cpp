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
    vector<int> rightSideView(TreeNode* root) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, 2, 3, nullopt, 5, nullopt, 4});
        vector<int> actual = solution.rightSideView(root);
        vector<int> expected = vector<int>{1, 3, 4};
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, 2, 3, 4, nullopt, nullopt, nullopt, 5});
        vector<int> actual = solution.rightSideView(root);
        vector<int> expected = vector<int>{1, 3, 4, 5};
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, nullopt, 3});
        vector<int> actual = solution.rightSideView(root);
        vector<int> expected = vector<int>{1, 3};
        leetcode::expectEqual(actual, expected, "Example 3");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{});
        vector<int> actual = solution.rightSideView(root);
        vector<int> expected = vector<int>{};
        leetcode::expectEqual(actual, expected, "Example 4");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
