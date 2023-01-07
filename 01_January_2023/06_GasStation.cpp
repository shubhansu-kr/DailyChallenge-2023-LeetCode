// https://leetcode.com/problems/gas-station/

#include <bits/stdc++.h>
using namespace std;



class Solution
{
    // TLE
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int sumGas = 0, sumCost = 0;
        vector<int> diff(gas.size());
        int index = -1;
        for (int i = 0; i < gas.size(); ++i)
        {
            sumGas += gas[i];
            sumCost += cost[i];
            diff[i] = gas[i] - cost[i];
            if (index == -1 && diff[i] < 0)
            {
                index = i;
            }
        }
        if (sumGas < sumCost)
            return -1;
        int runningSum = 0, i = index, maxSum = INT_MIN, ans = -1, tempIndex = index;
        // cout << "Before do : " << i << " " << index << " \n";
        do
        {
            i = (i + 1) % gas.size();
            if (diff[i] < 0)
            {
                if (runningSum >= maxSum)
                {
                    maxSum = runningSum;
                    ans = (tempIndex + 1) % gas.size();
                }
                runningSum = 0;
                tempIndex = i;
            }
            else
            {
                runningSum += diff[i];
            }
        } while (i != index);
        if (runningSum >= maxSum)
        {
            maxSum = runningSum;
            ans = (tempIndex + 1) % gas.size();
        }
        return ans;
    }
};

int main()
{
    Solution Obj;

    vector<int> gas = {5,4,12,0,2,11,4,2,2,1}, cost = {3,4,5,1,2,6,3,8,5,3};
    // diff 2,0,7,-1,0,5,1,-6,-3,-2
    // 2, 0
    cout << Obj.canCompleteCircuit(gas, cost);
    return 0;
}