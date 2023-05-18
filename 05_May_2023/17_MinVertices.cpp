// https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {
        vector<int> res, seen(n);
        for (auto &e : edges)
            seen[e[1]] = 1;
        for (int i = 0; i < n; ++i)
            if (seen[i] == 0)
                res.push_back(i);
        return res;
    }
};

int main()
{

    return 0;
}