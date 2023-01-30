// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std ;

class Solution3 {
    // Tabulation: Space Optimisation
public:
    int tribonacci(int n) {
        if (n < 3) return n != 0;
        int prev0 = 0, prev1 = 1, prev2 =1;

        for (int i = 3; i < n+1; ++i)
        {
            int temp;
            temp = prev0+prev1+prev2;

            prev0 = prev1;
            prev1 = prev2;
            prev2 = temp;
        }

        return prev2;
    }
};

class Solution2 {
    // Tabulation
public:
    int tribonacci(int n) {
        if (n < 3) return n != 0;
        vector<int> dp(n+1, -1);
        dp[0] = 0, dp[1] = 1, dp[2] = 1;
        for (int i = 3; i < n+1; ++i)
        {
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};

class Solution1 {
    // Recursion: Memoization
public:
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        return dp[n] = solve(n, dp);
    }

    int solve(int n, vector<int> &dp){
        if (n < 3) return dp[n] = n != 0;
        if (dp[n] != -1) return dp[n];
        return dp[n] = solve(n-1, dp)+solve(n-2, dp)+solve(n-3, dp);
    }
};

class Solution {
    // Recursion: BruteForce
public:
    int tribonacci(int n) {
        return solve(n);
    }

    int solve(int n){
        if (n < 2) return n != 0;
        return solve(n-1)+solve(n-2)+solve(n-3);
    }
};

int main () {
    
    return 0;
}