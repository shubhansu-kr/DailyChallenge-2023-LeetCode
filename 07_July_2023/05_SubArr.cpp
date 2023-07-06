// https://leetcode.com/problems/minimum-size-subarray-sum/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, ans = 1000000;
        
        while (j < nums.size()) {
            sum += nums[j];
            
            while (sum >= target) {
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }
            
            j++;
        }
        
        return (ans == 1000000) ? 0 : ans;
    }
};

int main () {
    
    return 0;
}