#include "../leetcode_test.hpp"

class Solution {
public:
    string predictPartyVictory(string senate) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        string senate = "RD";
        string actual = solution.predictPartyVictory(senate);
        string expected = "Radiant";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string senate = "RDD";
        string actual = solution.predictPartyVictory(senate);
        string expected = "Dire";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
