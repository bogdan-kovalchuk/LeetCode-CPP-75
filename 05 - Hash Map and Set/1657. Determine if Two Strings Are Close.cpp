#include "../leetcode_test.hpp"
#include <unordered_set>
#include <unordered_map>
#include <vector>

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.length() != word2.length())
            return false;

        unordered_set<char> word1Chars(word1.begin(), word1.end());
        unordered_set<char> word2Chars(word2.begin(), word2.end());

        if (word1Chars != word2Chars)
            return false;

        unordered_map<char, int> word1Map;
        for (const auto &ch : word1)
            word1Map[ch]++;

        unordered_map<char, int> word2Map;
        for (const auto &ch : word2)
            word2Map[ch]++;

        vector<int> word1Freq;
        for (auto &[k, v] : word1Map)
            word1Freq.push_back(v);

        vector<int> word2Freq;
        for (auto &[k, v] : word2Map)
            word2Freq.push_back(v);

        sort(word1Freq.begin(), word1Freq.end());
        sort(word2Freq.begin(), word2Freq.end());

        return word1Freq == word2Freq;
    }
};

// LOCAL_TEST_BEGIN
#ifdef LOCAL_TEST
int main()
{
    {
        Solution solution;
        string word1 = "abc";
        string word2 = "bca";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        string word1 = "a";
        string word2 = "aa";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = false;
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        string word1 = "cabbba";
        string word2 = "abbccc";
        bool actual = solution.closeStrings(word1, word2);
        bool expected = true;
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
