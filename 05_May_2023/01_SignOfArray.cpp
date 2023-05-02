// https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res = 1;
        for(auto it: nums){
            if (it == 0) return it;
            else if (it < 0) {
                res *= -1;
            }
        }
        return res;
    }
};

int main () {
    
    return 0;
}