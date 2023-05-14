// https://leetcode.com/problems/maximize-score-after-n-operations/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[8][16384] = {};
    int maxScore(vector<int> &nums, int i = 1, int mask = 0)
    {
        if (i > nums.size() / 2)
            return 0;
        if (!dp[i][mask])
            for (int j = 0; j < nums.size(); ++j)
                for (auto k = j + 1; k < nums.size(); ++k)
                {
                    int new_mask = (1 << j) + (1 << k);
                    if ((mask & new_mask) == 0)
                        dp[i][mask] = max(dp[i][mask], i * __gcd(nums[j], nums[k]) + maxScore(nums, i + 1, mask + new_mask));
                }
        return dp[i][mask];
    }
};

int main()
{

    return 0;
}