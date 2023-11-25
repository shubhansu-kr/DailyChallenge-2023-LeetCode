// https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/?envType=daily-question&envId=2023-11-25

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        for (int n : nums) {
            sum += n;
        }
        int left = 0;
        int right = sum;

        std::vector<int> result(nums.size(), 0);

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            right -= n;

            result[i] = n * i - left + right - n * (nums.size() - i - 1);

            left += n;
        }

        return result;
    }
};

int main () {
    
    return 0;
}