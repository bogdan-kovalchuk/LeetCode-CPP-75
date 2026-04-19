#include "../leetcode_test.hpp"

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        int i = 0;
        while (i < word1.length() || i < word2.length())
        {
            if (i < word1.length())
            {
                result += word1[i];
            }
            if (i < word2.length())
            {
                result += word2[i];
            }
            i++;
        }
        return result;
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        string word1 = "abc";
        string word2 = "pqr";
        string actual = solution.mergeAlternately(word1, word2);
        string expected = "apbqcr";
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string word1 = "ab";
        string word2 = "pqrs";
        string actual = solution.mergeAlternately(word1, word2);
        string expected = "apbqrs";
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string word1 = "abcd";
        string word2 = "pq";
        string actual = solution.mergeAlternately(word1, word2);
        string expected = "apbqcd";
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
