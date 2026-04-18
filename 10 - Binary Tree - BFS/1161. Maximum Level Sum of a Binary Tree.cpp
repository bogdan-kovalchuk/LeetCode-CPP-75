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
    int maxLevelSum(TreeNode* root) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{1, 7, 0, 7, -8, nullopt, nullopt});
        int actual = solution.maxLevelSum(root);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 1");
        leetcode::destroyTree(root);
    }

    {
        Solution solution;
        TreeNode* root = leetcode::makeTree(vector<optional<int>>{989, nullopt, 10250, 98693, -89388, nullopt, nullopt, nullopt, -32127});
        int actual = solution.maxLevelSum(root);
        int expected = 2;
        leetcode::expectEqual(actual, expected, "Example 2");
        leetcode::destroyTree(root);
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
