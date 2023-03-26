// https://leetcode.com/problems/longest-cycle-in-a-graph/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestCycle(vector<int> &edges)
    {
        int res = -1;
        vector<pair<int, int>> memo(edges.size(), {-1, -1});
        for (int i = 0; i < edges.size(); ++i)
            for (int j = i, dist = 0; j != -1; j = edges[j])
            {
                auto [dist_i, from_i] = memo[j];
                if (dist_i == -1)
                    memo[j] = {dist++, i};
                else
                {
                    if (from_i == i)
                        res = max(res, dist - dist_i);
                    break;
                }
            }
        return res;
    }
};

int main()
{

    return 0;
}