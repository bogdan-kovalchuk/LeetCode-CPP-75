#include "../leetcode_test.hpp"

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> piles = vector<int>{3, 6, 7, 11};
        int h = 8;
        int actual = solution.minEatingSpeed(piles, h);
        int expected = 4;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> piles = vector<int>{30, 11, 23, 4, 20};
        int h = 5;
        int actual = solution.minEatingSpeed(piles, h);
        int expected = 30;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> piles = vector<int>{30, 11, 23, 4, 20};
        int h = 6;
        int actual = solution.minEatingSpeed(piles, h);
        int expected = 23;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
