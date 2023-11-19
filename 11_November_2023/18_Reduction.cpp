// https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/?envType=daily-question&envId=2023-11-19

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        int operations = 0;
        int currentMax = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < currentMax) {
                currentMax = nums[i];
                operations += i;
            }
        }

        return operations;
    }
};

int main () {
    
    return 0;
}