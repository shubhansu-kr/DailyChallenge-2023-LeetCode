// https://leetcode.com/problems/flip-string-to-monotone-increasing/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Intution:
public:
    int minFlipsMonoIncr(string s)
    {
        int count = 0;
        vector<int> low(s.length() + 1), high(s.length() + 1);
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1') ++count;
            high[i + 1] = count;
        }
        count = 0;
        for (int i = s.length() - 1; i >= 0; --i)
        {
            if (s[i] == '0') ++count;
            low[i] = count;
        }
        int ans = INT_MAX;
        for (int i = 0; i <= s.length(); ++i) ans = min(ans, (low[i] + high[i]));
        return ans;
    }
};

int main()
{

    return 0;
}