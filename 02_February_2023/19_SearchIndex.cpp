// https://leetcode.com/problems/search-insert-position/submissions/901501551/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f = 0, r = nums.size()-1;
        int m ;
        while(f <= r) {
            m = f + (r-f)/2;
            if (nums[m] == target) return m;
            if (nums[m] < target) {
                f = m + 1;
            }
            else {
                r = m-1;
            }
        }
        return f;
    }
};

int main () {
    
    return 0;
}