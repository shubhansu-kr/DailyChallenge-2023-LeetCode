// https://leetcode.com/problems/edit-distance/description/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));

        for (int i = 0; i <= m; ++i){dp[i][0] = i;}
        for (int j = 0; j <= n; ++j){dp[0][j] = j;}
        
        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
            {
                if (word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else {
                    int del = 1 + dp[i - 1][j];
                    int rep = 1 + dp[i - 1][j - 1];
                    int ins = 1 + dp[i][j - 1];
                    int dup = min(del, rep);
                    dp[i][j] = min(dup , ins);
                }
            }
        return dp[m][n];
    }
};

int main () {
    
    return 0;
}