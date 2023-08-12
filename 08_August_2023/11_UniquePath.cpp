// https://leetcode.com/problems/unique-paths-ii/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n));
        dp[0][0] = 1;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (obstacleGrid[i][j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if (i == 0)
                    {
                        if (j > 0) dp[i][j] = dp[i][j - 1];
                    }
                    else if (j == 0 && i > 0)
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                    }
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};

int main () {
    
    return 0;
}