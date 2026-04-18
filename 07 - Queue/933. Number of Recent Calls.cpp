#include "../leetcode_test.hpp"

class RecentCounter {
public:
    RecentCounter() {
        throw logic_error("Not implemented");
    }
    
    int ping(int t) {
        throw logic_error("Not implemented");
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        RecentCounter obj;
        int actual_ping_1 = obj.ping(1);
        int expected_ping_1 = 1;
        leetcode::expectEqual(actual_ping_1, expected_ping_1, "Example 1 / ping #1");
        int actual_ping_2 = obj.ping(100);
        int expected_ping_2 = 2;
        leetcode::expectEqual(actual_ping_2, expected_ping_2, "Example 1 / ping #2");
        int actual_ping_3 = obj.ping(3001);
        int expected_ping_3 = 3;
        leetcode::expectEqual(actual_ping_3, expected_ping_3, "Example 1 / ping #3");
        int actual_ping_4 = obj.ping(3002);
        int expected_ping_4 = 3;
        leetcode::expectEqual(actual_ping_4, expected_ping_4, "Example 1 / ping #4");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
