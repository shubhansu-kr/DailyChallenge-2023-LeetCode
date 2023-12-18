// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/?envType=daily-question&envId=2023-12-18

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        return (nums[n-1]*nums[n-2] - nums[0] * nums[1]);
    }
};

int main () {
    
    return 0;
}  