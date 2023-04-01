// https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1, m;
        while(l <= h) {
            m = l + (h-l)/2;

            if (target == nums[m]) return m;
            else if (target > nums[m]) l = m+1;
            else h = m-1;
        }

        return -1;
    }
};

int main () {
    
    return 0;
}