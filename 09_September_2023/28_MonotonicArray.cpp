// https://leetcode.com/problems/monotonic-array/description/?envType=daily-question&envId=2023-09-29

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isMonotonic(std::vector<int>& nums) {
        if (nums.size() < 2) return true;

        int direction = 0;  // 0 means unknown, 1 means increasing, -1 means decreasing

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {  // increasing
                if (direction == 0) direction = 1;
                else if (direction == -1) return false;
            } else if (nums[i] < nums[i-1]) {  // decreasing
                if (direction == 0) direction = -1;
                else if (direction == 1) return false;
            }
        }

        return true;
    }
};

class Solution {
    // RE: Integer Overflow
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        if (n < 2) return true;
        int i = 1;
        while(i < n && nums[i] == nums[i-1]) ++i;
        if (i == n) return true;
        int slope = nums[i] - nums[i-1]; // +ve | -ve
        while(i < n) {
            if (nums[i] != nums[i-1]){
                int sp = nums[i] - nums[i-1];
                if (sp * slope < 0) return false;
            }
            ++i;
        }
        return true;
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