// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n)); 

        int x = 1;
        while (x < n)
        {
            for (int i = 0, j = x; i < n && j < n; ++i, ++j)
                if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
                else dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
            ++x ;
        }
        return dp[0][n - 1];
    }
};

int main () {
    
    return 0;
}