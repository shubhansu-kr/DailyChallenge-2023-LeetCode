// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/?envType=daily-question&envId=2023-10-09

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int i = findIndex(nums, target), j = findIndex(nums, target + 1) - 1;
        if (i < nums.size() && nums[i] == target) return {i, j};
        else return {-1, -1};
    }

    int findIndex(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            if (nums[mid] < target)l = mid + 1;
            else r = mid - 1;
        }
        return l;
    }
};

int main () {
    
    return 0;
}