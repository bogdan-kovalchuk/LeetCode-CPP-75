#include "../leetcode_test.hpp"

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<int>> rooms = vector<vector<int>>{vector<int>{1}, vector<int>{2}, vector<int>{3}, vector<int>{}};
        bool actual = solution.canVisitAllRooms(rooms);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<int>> rooms = vector<vector<int>>{vector<int>{1, 3}, vector<int>{3, 0, 1}, vector<int>{2}, vector<int>{0}};
        bool actual = solution.canVisitAllRooms(rooms);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
