#include "../leetcode_test.hpp"

class Solution {
public:
    int maxArea(vector<int>& height) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> height = vector<int>{1, 8, 6, 2, 5, 4, 8, 3, 7};
        int actual = solution.maxArea(height);
        int expected = 49;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> height = vector<int>{1, 1};
        int actual = solution.maxArea(height);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
