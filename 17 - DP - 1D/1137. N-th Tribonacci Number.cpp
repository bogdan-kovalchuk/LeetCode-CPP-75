#include "../leetcode_test.hpp"

class Solution {
public:
    int tribonacci(int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int n = 4;
        int actual = solution.tribonacci(n);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int n = 25;
        int actual = solution.tribonacci(n);
        int expected = 1389537;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
