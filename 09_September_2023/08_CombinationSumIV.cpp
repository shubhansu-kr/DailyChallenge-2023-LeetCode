// https://leetcode.com/problems/combination-sum-iv/?envType=daily-question&envId=2023-09-09

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for (int i = 1; i <= target; i++)
            for (int num : nums)
                if (num <= i) dp[i] += dp[i-num];
        return dp[target];
    }
};

int main () {
    
    return 0;
}