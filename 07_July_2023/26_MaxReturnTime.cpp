// https://leetcode.com/problems/maximum-running-time-of-n-computers/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxRunTime(int n, vector<int> &batteries)
    {
        sort(batteries.begin(), batteries.end());
        long long sum = accumulate(batteries.begin(), batteries.end(), 0L);
        int k = 0, na = batteries.size();
        while (batteries[na - 1 - k] > sum / (n - k))
            sum -= batteries[na - 1 - k++];
        return sum / (n - k);
    }
};

int main()
{

    return 0;
}