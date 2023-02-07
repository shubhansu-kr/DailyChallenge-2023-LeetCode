// https://leetcode.com/problems/fruit-into-baskets/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // BruteForce: Intution
public:

    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> count;
        int i, j;
        for (i = 0, j = 0; j < fruits.size(); ++j)
        {
            count[fruits[j]]++;
            if (count.size() > 2)
            {
                if (--count[fruits[i]] == 0) count.erase(fruits[i]);
                i++;
            }
        }
        return j - i;
    }
};

class Solution
{
    // BruteForce: TLE
public:
    int totalFruit(vector<int> &fruits)
    {

        // Start From each index
        int ans = INT_MIN, n = fruits.size();
        for (int i = 0; i < n; ++i)
        {
            int type1 = -1, type2 = -1, store = 0;
            for (int j = i; j < n; ++j)
            {
                if (type1 == -1)
                {
                    type1 = fruits[j];
                }
                else if (type2 == -1)
                {
                    type2 = fruits[j];
                }
                else
                {
                    if (fruits[j] == type1 || fruits[j] == type2)
                    {
                    }
                    else
                    {
                        break;
                    }
                }
                ++store;
            }
            ans = max(ans, store);
        }
        return ans;
    }
};

int main()
{

    return 0;
}