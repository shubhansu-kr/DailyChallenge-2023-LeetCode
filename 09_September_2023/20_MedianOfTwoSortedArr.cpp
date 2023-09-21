// https://leetcode.com/problems/median-of-two-sorted-arrays/description/?envType=daily-question&envId=2023-09-21

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        bool isOdd = (m+n)%2;
        nums1.emplace_back(INT_MAX);
        nums2.emplace_back(INT_MAX);
        int curr = -1, prev = -1, tar = (m + n)/2;
        int i = 0, j = 0, k = 0;
        while (i < nums1.size() && j < nums2.size()) {
            prev = curr;
            if (nums1[i] < nums2[j]) {
                curr = nums1[i++];
            }
            else {
                curr = nums2[j++];
            }
            if (++k > tar) break;
        }   
        return isOdd? double(curr): double((curr+prev)/2.0);
    }
};

int main () {
    
    return 0;
}