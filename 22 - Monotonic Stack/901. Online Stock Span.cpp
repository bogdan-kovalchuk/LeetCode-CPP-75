#include "../leetcode_test.hpp"

class StockSpanner {
public:
    StockSpanner() {
        throw logic_error("Not implemented");
    }
    
    int next(int price) {
        throw logic_error("Not implemented");
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        StockSpanner obj;
        int actual_next_1 = obj.next(100);
        int expected_next_1 = 1;
        leetcode::expectEqual(actual_next_1, expected_next_1, "Example 1 / next #1");
        int actual_next_2 = obj.next(80);
        int expected_next_2 = 1;
        leetcode::expectEqual(actual_next_2, expected_next_2, "Example 1 / next #2");
        int actual_next_3 = obj.next(60);
        int expected_next_3 = 1;
        leetcode::expectEqual(actual_next_3, expected_next_3, "Example 1 / next #3");
        int actual_next_4 = obj.next(70);
        int expected_next_4 = 2;
        leetcode::expectEqual(actual_next_4, expected_next_4, "Example 1 / next #4");
        int actual_next_5 = obj.next(60);
        int expected_next_5 = 1;
        leetcode::expectEqual(actual_next_5, expected_next_5, "Example 1 / next #5");
        int actual_next_6 = obj.next(75);
        int expected_next_6 = 4;
        leetcode::expectEqual(actual_next_6, expected_next_6, "Example 1 / next #6");
        int actual_next_7 = obj.next(85);
        int expected_next_7 = 6;
        leetcode::expectEqual(actual_next_7, expected_next_7, "Example 1 / next #7");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
