// https://leetcode.com/problems/sort-array-by-parity/description/?envType=daily-question&envId=2023-09-28

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            if (nums[l] % 2 != 0)
            {
                swap(nums[l], nums[r]);
                --r;
            }
            else
            {
                ++l;
            }
        }
        return nums;
    }
};

int main () {
    
    return 0;
}