#include "../leetcode_test.hpp"

class Solution {
public:
    string removeStars(string s) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string s = "leet**cod*e";
        string actual = solution.removeStars(s);
        string expected = "lecoe";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string s = "erase*****";
        string actual = solution.removeStars(s);
        string expected = "";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
