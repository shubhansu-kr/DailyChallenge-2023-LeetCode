// Let's Go

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string findOdd(vector<string> series)
    {
    }

    string findOdd(vector<string> &series)
    {
        for (int j = 0; j + 1 < series[0].size(); ++j)
        {
            unordered_map<int, vector<int>> m;
            for (int i = 0; i < series.size(); ++i)
                if (m[series[i][j + 1] - series[i][j]].size() < 2)
                    m[series[i][j + 1] - series[i][j]].push_back(i);
            if (m.size() == 2)
                return series[begin(m)->second.size() == 1 ? begin(m)->second.back() : next(begin(m))->second.back()];
        }
        return series[0];
    }
};

int main()
{

    return 0;
}