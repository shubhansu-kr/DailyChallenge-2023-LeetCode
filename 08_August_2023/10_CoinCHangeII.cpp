// https://leetcode.com/problems/coin-change-ii/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 1));

        for (int amt = 1; amt <= amount; ++amt)
        {
            if (amt % coins[0] == 0) dp[0][amt] = 1;
            else dp[0][amt] = 0;
        }

        for (int i = 1; i < n; ++i)
        {
            for (int j = 1; j <= amount; ++j)
            {
                int pick = 0;
                if (j >= coins[i]) pick = dp[i][j - coins[i]];
                int noPick = dp[i - 1][j];
                dp[i][j] = pick + noPick;
            }
        }
        return dp[n - 1][amount];
    }
};

int main () {
    
    return 0;
}