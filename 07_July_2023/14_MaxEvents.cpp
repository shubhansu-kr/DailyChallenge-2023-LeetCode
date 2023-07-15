// https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<vector<int>> &events, int n, int pos, int k)
    {
        int i;

        if (pos >= n || k == 0) return 0;

        for (i = pos + 1; i < n; i++)
            if (events[i][0] > events[pos][1]) break;

        return max(solve(events, n, pos + 1, k), events[pos][2] + solve(events, n, i, k - 1));
    }

    int maxValue(vector<vector<int>> &events, int k)
    {
        int n = events.size();
        sort(events.begin(), events.end());

        return solve(events, n, 0, k);
    }
};

int main()
{

    return 0;
}