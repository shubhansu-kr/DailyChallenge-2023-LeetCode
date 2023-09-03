// https://leetcode.com/problems/unique-paths/?envType=daily-question&envId=2023-09-03

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);
        
        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j)
                dp[j] = dp[j] + dp[j-1];  
        return dp[n-1];
    }
};

int main () {
    
    return 0;
}