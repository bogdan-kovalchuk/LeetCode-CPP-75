#include "../leetcode_test.hpp"

class Solution {
public:
    int minDistance(string word1, string word2) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string word1 = "horse";
        string word2 = "ros";
        int actual = solution.minDistance(word1, word2);
        int expected = 3;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string word1 = "intention";
        string word2 = "execution";
        int actual = solution.minDistance(word1, word2);
        int expected = 5;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
