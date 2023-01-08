// https://leetcode.com/problems/max-points-on-a-line/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        int m = points[0].size();
        map<float, int> mp;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int x1 = points[i][0];
            int y1 = points[i][1];
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                int x2 = points[j][0];
                int y2 = points[j][1];
                float m;
                if ((x2 - x1) == 0)
                    m = float(INT_MIN);
                else
                    m = (float(y2 - y1) / float(x2 - x1));
                mp[m]++;
            }
            for (auto &i : mp)
            {
                res = max(res, i.second);
            }
            mp.clear();
        }
        return res + 1;
    }
};

int main()
{

    return 0;
}