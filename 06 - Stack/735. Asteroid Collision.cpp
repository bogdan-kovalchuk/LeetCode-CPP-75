#include "../leetcode_test.hpp"

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> result;

        for (int asteroid : asteroids)
        {
            bool destroyed = false;

            while (!result.empty() && result.back() > 0 && asteroid < 0)
            {
                if (result.back() < -asteroid)
                {
                    result.pop_back();
                    continue;
                }
                else if (result.back() == -asteroid)
                {
                    result.pop_back();
                }

                destroyed = true;
                break;
            }

            if (!destroyed)
            {
                result.push_back(asteroid);
            }
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
        vector<int> asteroids = vector<int>{5, 10, -5};
        vector<int> actual = solution.asteroidCollision(asteroids);
        vector<int> expected = vector<int>{5, 10};
        leetcode::expectEqual(actual, expected, "Example 1");
    }

    {
        Solution solution;
        vector<int> asteroids = vector<int>{8, -8};
        vector<int> actual = solution.asteroidCollision(asteroids);
        vector<int> expected = vector<int>{};
        leetcode::expectEqual(actual, expected, "Example 2");
    }

    {
        Solution solution;
        vector<int> asteroids = vector<int>{10, 2, -5};
        vector<int> actual = solution.asteroidCollision(asteroids);
        vector<int> expected = vector<int>{10};
        leetcode::expectEqual(actual, expected, "Example 3");
    }

    {
        Solution solution;
        vector<int> asteroids = vector<int>{3, 5, -6, 2, -1, 4};
        vector<int> actual = solution.asteroidCollision(asteroids);
        vector<int> expected = vector<int>{-6, 2, 4};
        leetcode::expectEqual(actual, expected, "Example 4");
    }

    leetcode::printTestsPassed();
    return 0;
}
#endif
// LOCAL_TEST_END
