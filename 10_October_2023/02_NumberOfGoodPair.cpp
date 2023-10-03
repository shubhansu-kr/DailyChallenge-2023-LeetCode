// https://leetcode.com/problems/number-of-good-pairs/?envType=daily-question&envId=2023-10-03

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(100);
        for(auto &it: nums){
            freq[it-1]++;
        }
        int ans = 0;
        for(int i = 0; i < 100; ++i) {
            int a = freq[i];
            ans += ((a-1)*(a)/2);
        }
        return ans;
    }
};

int main () {
    Solution obj;
    vector<int> nums = {};
    
    cout << obj.numIdenticalPairs(nums);
    return 0;
}