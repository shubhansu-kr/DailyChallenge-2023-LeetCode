// https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/?envType=daily-question&envId=2023-12-29

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size(), inf = 1e9, maxd;
        if (n < d) return -1;
        vector<int> dp(n + 1, 1e9);
        dp[n] = 0;
        for (int x = 1; x <= d; ++x) {
            for (int i = 0; i <= n - x; ++i) {
                maxd = 0, dp[i] = inf;
                for (int j = i; j <= n - x; ++j) {
                    maxd = max(maxd, jobDifficulty[j]);
                    dp[i] = min(dp[i], maxd + dp[j + 1]);
                }
            }
        }
        return dp[0];
    }
};

int main () {
    
    return 0;
}