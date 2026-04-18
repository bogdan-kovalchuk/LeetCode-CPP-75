#include "../leetcode_test.hpp"

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<int> flowerbed = vector<int>{1, 0, 0, 0, 1};
        int n = 1;
        bool actual = solution.canPlaceFlowers(flowerbed, n);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> flowerbed = vector<int>{1, 0, 0, 0, 1};
        int n = 2;
        bool actual = solution.canPlaceFlowers(flowerbed, n);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
