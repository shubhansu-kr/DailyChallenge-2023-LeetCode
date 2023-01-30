// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std ;

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