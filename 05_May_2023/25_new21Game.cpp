// https://leetcode.com/problems/new-21-game/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double new21Game(int n, int k, int maxPts)
    {
        if (k == 0 || n >= k + maxPts) return 1.0;
        vector<double> dp(n + 1);
        dp[0] = 1.0;
        double Wsum = 1.0, res = 0.0;
        for (int i = 1; i <= n; ++i)
        {
            dp[i] = Wsum / maxPts;
            if (i < k) Wsum += dp[i];
            else res += dp[i];
            if (i - maxPts >= 0) Wsum -= dp[i - maxPts];
        }
        return res;
    }
};

int main()
{

    return 0;
}