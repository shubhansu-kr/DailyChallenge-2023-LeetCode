// https://leetcode.com/problems/single-element-in-a-sorted-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // BruteForce: Xor operator. // O(n) 
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto &it : nums) {
            ans ^= it;
        }
        return ans;
    }
};

int main () {
    
    return 0;
}