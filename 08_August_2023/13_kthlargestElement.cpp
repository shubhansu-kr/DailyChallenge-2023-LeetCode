// https://leetcode.com/problems/kth-largest-element-in-an-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, greater<int>> mset(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++)
        {
            mset.erase(mset.begin());
        }
        return *mset.begin();
    }
};

int main () {
    
    return 0;
}