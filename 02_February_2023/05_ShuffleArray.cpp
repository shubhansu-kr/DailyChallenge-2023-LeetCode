// https://leetcode.com/problems/shuffle-the-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0, j = n, k = 0;
        vector<int> ans(2*n);
        while(k < 2*n){
            ans[k++] = nums[i++];
            ans[k++] = nums[j++];
        }
        return ans;
    }
};

int main () {
    
    return 0;
}