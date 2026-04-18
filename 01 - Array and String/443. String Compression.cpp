#include "../leetcode_test.hpp"

class Solution {
public:
    int compress(vector<char>& chars) {
        throw logic_error("Not implemented");
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main() {
    {
        Solution solution;
        vector<char> chars = vector<char>{'a', 'a', 'b', 'b', 'c', 'c', 'c'};
        int actualLength = solution.compress(chars);
        leetcode::expectEqual(actualLength, 6, "Example 1 length");
        chars.resize(actualLength);
        vector<char> expectedChars = vector<char>{'a', '2', 'b', '2', 'c', '3'};
        leetcode::expectEqual(chars, expectedChars, "Example 1 chars");
    }

    {
        Solution solution;
        vector<char> chars = vector<char>{'a'};
        int actualLength = solution.compress(chars);
        leetcode::expectEqual(actualLength, 1, "Example 2 length");
        chars.resize(actualLength);
        vector<char> expectedChars = vector<char>{'a'};
        leetcode::expectEqual(chars, expectedChars, "Example 2 chars");
    }

    {
        Solution solution;
        vector<char> chars = vector<char>{'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
        int actualLength = solution.compress(chars);
        leetcode::expectEqual(actualLength, 4, "Example 3 length");
        chars.resize(actualLength);
        vector<char> expectedChars = vector<char>{'a', 'b', '1', '2'};
        leetcode::expectEqual(chars, expectedChars, "Example 3 chars");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
