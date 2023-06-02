// https://leetcode.com/problems/detonate-the-maximum-bombs/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dfs(int i, vector<vector<int>> &al, bitset<100> &detonated)
    {
        if (!detonated[i])
        {
            detonated[i] = true;
            for (int j : al[i]) dfs(j, al, detonated);
        }
        return detonated.count();
    }
    int maximumDetonation(vector<vector<int>> &bombs)
    {
        int res = 0, sz = bombs.size();
        vector<vector<int>> al(bombs.size());
        for (int i = 0; i < sz; ++i)
        {
            long long x = bombs[i][0], y = bombs[i][1], r2 = (long long)bombs[i][2] * bombs[i][2];
            for (int j = 0; j < bombs.size(); ++j)
                if ((x - bombs[j][0]) * (x - bombs[j][0]) + (y - bombs[j][1]) * (y - bombs[j][1]) <= r2)
                    al[i].push_back(j);
        }
        for (int i = 0; i < sz && res < sz; ++i) res = max(dfs(i, al, bitset<100>() = {}), res);
        return res;
    }
};

int main()
{

    return 0;
}