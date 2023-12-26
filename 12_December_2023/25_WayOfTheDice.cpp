// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/?envType=daily-question&envId=2023-12-26

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int mod = 1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        return solve(target, k, n, dp);
    }

    int solve(int &target, int &k, int &n, vector<vector<int>> &dp, int sum = 0, int i = 0) {
        if (i == n || sum > target) {
            return (sum == target);
        };

        if (dp[i][sum] != -1) return dp[i][sum];
        long ways = 0;
        for (int j = 1; j < k+1; ++j)
        {
            ways += solve(target, k, n, dp, sum+j, i+1);
        }
        ways %= mod;
        return dp[i][sum] = ways;
    }
};

int main () {
    
    return 0;
}