// https://leetcode.com/problems/predict-the-winner/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        long sumA = solve(nums, i, j), sum = 0;
        for(auto it: nums) {
            sum += it;
        }
        long sumB = sum - sumA;
        return sumA >= sumB;
    }

    long solve(vector<int> &nums, int i, int j, int t = 1) {
        if (i > j) return 0;
        
        if (t) {
            // Player 1 turn
            return max(nums[i] + solve(nums, i+1, j, !t), nums[j] + solve(nums, i, j-1, !t));
        }
        else {
            // Player 2 turn
            return max(solve(nums, i+1, j, !t), solve(nums, i, j-1, !t));
        }
    }
};

int main () {
    
    return 0;
}