// https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<vector<int>> &events, int n, int pos, int k)
    {
        int i;

        if (pos >= n || k == 0)
            return 0;

        for (i = pos + 1; i < n; i++)
            if (events[i][0] > events[pos][1])
                break;

        return max(solve(events, n, pos + 1, k), events[pos][2] + solve(events, n, i, k - 1));
    }

    int maxValue(vector<vector<int>> &events, int k)
    {
        int n = events.size();
        sort(events.begin(), events.end());

        return solve(events, n, 0, k);
    }
};

class Solution1
{
public:
    int BS(int index, vector<vector<int>> &events, int value)
    {
        int lo = index;
        int hi = events.size() - 1;
        int req = -1;
        while (hi >= lo)
        {
            int mid = lo + (hi - lo) / 2;
            if (events[mid][0] > value)
            {
                req = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        return req;
    }

    int helper(int i, vector<vector<int>> &events, int k, vector<vector<int>> &dp)
    {
        if (i >= events.size() || k == 0 || i == -1)
            return 0;
        if (dp[i][k] != -1)
            return dp[i][k];

        int index = BS(i + 1, events, events[i][1]);

        int c1 = events[i][2] + helper(index, events, k - 1, dp);
        int c2 = helper(i + 1, events, k, dp);

        return dp[i][k] = max(c1, c2);
    }

    int maxValue(vector<vector<int>> &events, int k)
    {

        sort(events.begin(), events.end());
        int n = events.size();
        vector<vector<int>> dp(n + 5, vector<int>(k + 1, -1));
        return helper(0, events, k, dp);
    }
};

int main()
{

    return 0;
}