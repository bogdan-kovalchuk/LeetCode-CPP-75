#include "../leetcode_test.hpp"

class Solution {
public:
    vector<int> countBits(int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        int n = 2;
        vector<int> actual = solution.countBits(n);
        vector<int> expected = vector<int>{0, 1, 1};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int n = 5;
        vector<int> actual = solution.countBits(n);
        vector<int> expected = vector<int>{0, 1, 1, 2, 1, 2};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
