#include "../leetcode_test.hpp"

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<string> products = vector<string>{"mobile", "mouse", "moneypot", "monitor", "mousepad"};
        string searchWord = "mouse";
        vector<vector<string>> actual = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = vector<vector<string>>{vector<string>{"mobile", "moneypot", "monitor"}, vector<string>{"mobile", "moneypot", "monitor"}, vector<string>{"mouse", "mousepad"}, vector<string>{"mouse", "mousepad"}, vector<string>{"mouse", "mousepad"}};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<string> products = vector<string>{"havana"};
        string searchWord = "havana";
        vector<vector<string>> actual = solution.suggestedProducts(products, searchWord);
        vector<vector<string>> expected = vector<vector<string>>{vector<string>{"havana"}, vector<string>{"havana"}, vector<string>{"havana"}, vector<string>{"havana"}, vector<string>{"havana"}, vector<string>{"havana"}};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
