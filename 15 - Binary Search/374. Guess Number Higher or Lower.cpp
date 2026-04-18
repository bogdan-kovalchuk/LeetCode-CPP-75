#include "../leetcode_test.hpp"

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
static int local_pick = 0;

int guess(int num) {
    if (num == local_pick) {
        return 0;
    }
    return num > local_pick ? -1 : 1;
}

int main() {
    {
        Solution solution;
        int n = 10;
        local_pick = 6;
        int actual = solution.guessNumber(n);
        int expected = 6;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        int n = 1;
        local_pick = 1;
        int actual = solution.guessNumber(n);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        int n = 2;
        local_pick = 1;
        int actual = solution.guessNumber(n);
        int expected = 1;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
