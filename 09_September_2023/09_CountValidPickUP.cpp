// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options/?envType=daily-question&envId=2023-09-10

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    const int MOD = 1e9 + 7;  
    vector<long long> dp;    

    int countOrders(int n) {
        dp.resize(n + 1); 
        dp[0] = 1;
        for (int currentPairs = 1; currentPairs <= n; currentPairs++) {
            dp[currentPairs] = dp[currentPairs - 1] * (2 * currentPairs - 1) * currentPairs % MOD;
        }
        return dp[n]; 
    }
};

int main () {
    
    return 0;
}