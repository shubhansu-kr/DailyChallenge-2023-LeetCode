// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/?envType=daily-question&envId=2023-11-17

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int k = nums.size();
        int pairSum = nums[k - 1] + nums[0];
        for (int i = 0; i < k / 2; i++)
        {
            pairSum = max(pairSum, (nums[i] + nums[k - 1 - i]));
        }
        return pairSum;
    }
};

int main () {
    
    return 0;
}