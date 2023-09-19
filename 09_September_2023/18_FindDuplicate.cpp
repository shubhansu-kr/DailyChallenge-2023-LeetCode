// https://leetcode.com/problems/find-the-duplicate-number/description/?envType=daily-question&envId=2023-09-19

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            int idx = abs(nums[i]);

            if (nums[idx] < 0) return idx;

            nums[idx] = -nums[idx];
        }

        return n;
    }
};

int main()
{

    for (int i = 0; i < 100000; ++i)
    {
        cout << i << ", ";
    }

    return 0;
}