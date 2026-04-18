#include "../leetcode_test.hpp"

class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<vector<string>> equations = vector<vector<string>>{vector<string>{"a", "b"}, vector<string>{"b", "c"}};
        vector<double> values = vector<double>{2.0, 3.0};
        vector<vector<string>> queries = vector<vector<string>>{vector<string>{"a", "c"}, vector<string>{"b", "a"}, vector<string>{"a", "e"}, vector<string>{"a", "a"}, vector<string>{"x", "x"}};
        vector<double> actual = solution.calcEquation(equations, values, queries);
        vector<double> expected = vector<double>{6.0, 0.5, -1.0, 1.0, -1.0};
        leetcode::expectVectorNear(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<vector<string>> equations = vector<vector<string>>{vector<string>{"a", "b"}, vector<string>{"b", "c"}, vector<string>{"bc", "cd"}};
        vector<double> values = vector<double>{1.5, 2.5, 5.0};
        vector<vector<string>> queries = vector<vector<string>>{vector<string>{"a", "c"}, vector<string>{"c", "b"}, vector<string>{"bc", "cd"}, vector<string>{"cd", "bc"}};
        vector<double> actual = solution.calcEquation(equations, values, queries);
        vector<double> expected = vector<double>{3.75, 0.4, 5.0, 0.2};
        leetcode::expectVectorNear(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<vector<string>> equations = vector<vector<string>>{vector<string>{"a", "b"}};
        vector<double> values = vector<double>{0.5};
        vector<vector<string>> queries = vector<vector<string>>{vector<string>{"a", "b"}, vector<string>{"b", "a"}, vector<string>{"a", "c"}, vector<string>{"x", "y"}};
        vector<double> actual = solution.calcEquation(equations, values, queries);
        vector<double> expected = vector<double>{0.5, 2.0, -1.0, -1.0};
        leetcode::expectVectorNear(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
