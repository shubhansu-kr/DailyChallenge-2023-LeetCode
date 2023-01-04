// https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        unordered_map<int, int> count;
        int res = 0, freq1;
        for (int a : tasks)
            ++count[a];
        for (auto &it : count)
        {
            if (it.second == 1)
                return -1;
            res += (it.second + 2) / 3;
        }
        return res;
    }
};

int main()
{

    return 0;
}