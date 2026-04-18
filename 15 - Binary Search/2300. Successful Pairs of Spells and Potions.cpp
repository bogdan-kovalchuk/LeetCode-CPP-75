#include "../leetcode_test.hpp"

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> spells = vector<int>{5, 1, 3};
        vector<int> potions = vector<int>{1, 2, 3, 4, 5};
        long long success = 7LL;
        vector<int> actual = solution.successfulPairs(spells, potions, success);
        vector<int> expected = vector<int>{4, 0, 3};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> spells = vector<int>{3, 1, 2};
        vector<int> potions = vector<int>{8, 5, 8};
        long long success = 16LL;
        vector<int> actual = solution.successfulPairs(spells, potions, success);
        vector<int> expected = vector<int>{2, 0, 2};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
