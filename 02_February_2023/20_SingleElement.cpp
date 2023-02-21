// https://leetcode.com/problems/single-element-in-a-sorted-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // 
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Using binary split.
        int low = 0, high = nums.size()-1;
        int mid = (low + high) / 2;
        while (low < high)
        {
            mid = (low + high)/2;
            if (nums[mid] == nums[mid-1]){
                high = mid-1;
            }
            else if (nums[mid] == nums[mid+1]){
                low = mid+1;
            }
            else {
                return nums[mid];
            }
        }
        return nums[mid];
    }
};

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