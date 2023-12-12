// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/?envType=daily-question&envId=2023-12-12

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;
        for(auto &it: nums){
            if (it >= max1) {
                max2 = max1;
                max1 = it;
            }
            else if (it >= max2) {
                max2 = it;
            }
        } 
        return (max1-1)*(max2-1);
    }
};

int main () {
    
    return 0;
}