// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/?envType=daily-question&envId=2023-09-20

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int i, len = 0, sum1 = 0, sum2 = 0;
        for (i = 0; i < nums.size(); i++)
            sum2 += nums[i]; 

        sum2 -= x; 

        if (sum2 == 0) return nums.size();

        int j;
        i = 0;
        for (j = 0; j < nums.size(); j++)
        {
            sum1 += nums[j];

            while (i < nums.size() && sum1 > sum2) 
                sum1 -= nums[i++];

            if (sum1 == sum2)              
                len = max(len, j - i + 1);
        }
        if (!len) return -1;
        return nums.size() - len;
    }
};

int main()
{

    return 0;
}