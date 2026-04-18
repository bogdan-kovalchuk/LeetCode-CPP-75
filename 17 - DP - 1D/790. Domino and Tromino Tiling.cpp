#include "../leetcode_test.hpp"

class Solution {
public:
    int numTilings(int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int n = 3;
        int actual = solution.numTilings(n);
        int expected = 5;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int n = 1;
        int actual = solution.numTilings(n);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
