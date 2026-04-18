#include "../leetcode_test.hpp"

class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        throw logic_error("Not implemented");
    }
    
    int popSmallest() {
        throw logic_error("Not implemented");
    }
    
    void addBack(int num) {
        throw logic_error("Not implemented");
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        SmallestInfiniteSet obj;
        obj.addBack(2);
        int actual_popSmallest_1 = obj.popSmallest();
        int expected_popSmallest_1 = 1;
        leetcode::expectEqual(actual_popSmallest_1, expected_popSmallest_1, "Example 1 / popSmallest #1");
        int actual_popSmallest_2 = obj.popSmallest();
        int expected_popSmallest_2 = 2;
        leetcode::expectEqual(actual_popSmallest_2, expected_popSmallest_2, "Example 1 / popSmallest #2");
        int actual_popSmallest_3 = obj.popSmallest();
        int expected_popSmallest_3 = 3;
        leetcode::expectEqual(actual_popSmallest_3, expected_popSmallest_3, "Example 1 / popSmallest #3");
        obj.addBack(1);
        int actual_popSmallest_4 = obj.popSmallest();
        int expected_popSmallest_4 = 1;
        leetcode::expectEqual(actual_popSmallest_4, expected_popSmallest_4, "Example 1 / popSmallest #4");
        int actual_popSmallest_5 = obj.popSmallest();
        int expected_popSmallest_5 = 4;
        leetcode::expectEqual(actual_popSmallest_5, expected_popSmallest_5, "Example 1 / popSmallest #5");
        int actual_popSmallest_6 = obj.popSmallest();
        int expected_popSmallest_6 = 5;
        leetcode::expectEqual(actual_popSmallest_6, expected_popSmallest_6, "Example 1 / popSmallest #6");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
