// https://leetcode.com/problems/monotonic-array/description/?envType=daily-question&envId=2023-09-29

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // WA
public:
    bool isMonotonic(vector<int>& nums) {
        
    }
};

class Solution {
    // WA
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        if (n < 2) return true;
        int i = 0, j = 1;
        int slope = nums[j++] - num[i++];

        while(j < n) {
            if (nums[i] != nums[j]) {
                int sp = nums[j] - nums[i];
                if (!slope) slope = sp;
                else {
                    if (sp * slope < 0) return false;
                }
            }
            ++i, ++j;
        }

        return false;
    }
};

int main () {
    
    return 0;
}