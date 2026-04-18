#include "../leetcode_test.hpp"

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> arr = vector<int>{1, 2, 2, 1, 1, 3};
        bool actual = solution.uniqueOccurrences(arr);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> arr = vector<int>{1, 2};
        bool actual = solution.uniqueOccurrences(arr);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> arr = vector<int>{-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
        bool actual = solution.uniqueOccurrences(arr);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
