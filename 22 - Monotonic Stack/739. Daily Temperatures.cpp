#include "../leetcode_test.hpp"

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> temperatures = vector<int>{73, 74, 75, 71, 69, 72, 76, 73};
        vector<int> actual = solution.dailyTemperatures(temperatures);
        vector<int> expected = vector<int>{1, 1, 4, 2, 1, 1, 0, 0};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> temperatures = vector<int>{30, 40, 50, 60};
        vector<int> actual = solution.dailyTemperatures(temperatures);
        vector<int> expected = vector<int>{1, 1, 1, 0};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> temperatures = vector<int>{30, 60, 90};
        vector<int> actual = solution.dailyTemperatures(temperatures);
        vector<int> expected = vector<int>{1, 1, 0};
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
