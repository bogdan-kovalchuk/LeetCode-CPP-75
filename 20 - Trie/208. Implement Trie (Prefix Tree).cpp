#include "../leetcode_test.hpp"

class Trie {
public:
    Trie() {
        throw logic_error("Not implemented");
    }
    
    void insert(string word) {
        throw logic_error("Not implemented");
    }
    
    bool search(string word) {
        throw logic_error("Not implemented");
    }
    
    bool startsWith(string prefix) {
        throw logic_error("Not implemented");
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Trie obj;
        obj.insert("apple");
        bool actual_search_1 = obj.search("apple");
        bool expected_search_1 = true;
        leetcode::expectEqual(actual_search_1, expected_search_1, "Example 1 / search #1");
        bool actual_search_2 = obj.search("app");
        bool expected_search_2 = false;
        leetcode::expectEqual(actual_search_2, expected_search_2, "Example 1 / search #2");
        bool actual_startsWith_1 = obj.startsWith("app");
        bool expected_startsWith_1 = true;
        leetcode::expectEqual(actual_startsWith_1, expected_startsWith_1, "Example 1 / startsWith #1");
        obj.insert("app");
        bool actual_search_3 = obj.search("app");
        bool expected_search_3 = true;
        leetcode::expectEqual(actual_search_3, expected_search_3, "Example 1 / search #3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
