// https://leetcode.com/problems/number-of-music-playlists/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numMusicPlaylists(int n, int goal, int k)
    {
        long dp[n + 1][goal + 1], mod = 1e9 + 7;
        for (int i = k + 1; i <= n; ++i)
            for (int j = i; j <= goal; ++j)
                if ((i == j) || (i == k + 1))
                    dp[i][j] = factorial(i);
                else
                    dp[i][j] = (dp[i - 1][j - 1] * i + dp[i][j - 1] * (i - k)) % mod;
        return (int)dp[n][goal];
    }

    long factorial(int n)
    {
        return n ? factorial(n - 1) * n % (long)(1e9 + 7) : 1;
    }
};

int main()
{

    return 0;
}