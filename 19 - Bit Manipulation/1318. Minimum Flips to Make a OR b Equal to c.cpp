#include "../leetcode_test.hpp"

class Solution {
public:
    int minFlips(int a, int b, int c) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int a = 2;
        int b = 6;
        int c = 5;
        int actual = solution.minFlips(a, b, c);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int a = 4;
        int b = 2;
        int c = 7;
        int actual = solution.minFlips(a, b, c);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        int a = 1;
        int b = 2;
        int c = 3;
        int actual = solution.minFlips(a, b, c);
        int expected = 0;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
