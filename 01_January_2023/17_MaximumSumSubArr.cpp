// https://leetcode.com/problems/maximum-sum-circular-subarray/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int total = 0, maxSum = nums[0], curMax = 0, minSum = nums[0], curMin = 0;
        for (int &a : nums)
        {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};

int main()
{

    return 0;
}