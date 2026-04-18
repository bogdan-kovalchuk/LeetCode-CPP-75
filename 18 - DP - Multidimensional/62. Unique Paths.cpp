#include "../leetcode_test.hpp"

class Solution {
public:
    int uniquePaths(int m, int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int m = 3;
        int n = 7;
        int actual = solution.uniquePaths(m, n);
        int expected = 28;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int m = 3;
        int n = 2;
        int actual = solution.uniquePaths(m, n);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
