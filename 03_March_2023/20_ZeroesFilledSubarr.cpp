// https://leetcode.com/problems/number-of-zero-filled-subarrays/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long res = 0;
        for (int i = 0, j = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
                j = i + 1;
            res += i - j + 1;
        }
        return res;
    }
};

int main()
{

    return 0;
}