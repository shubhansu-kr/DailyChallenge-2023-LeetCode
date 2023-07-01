// https://leetcode.com/problems/fair-distribution-of-cookies/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans = INT_MAX;
    void solve(int start, vector<int> &cookies, vector<int> &v, int k)
    {
        if (start == cookies.size())
        {
            int maxm = INT_MIN;
            for (int i = 0; i < k; i++)
            {
                maxm = max(maxm, v[i]);
            }
            ans = min(ans, maxm);
            return;
        }
        for (int i = 0; i < k; i++)
        {
            v[i] += cookies[start];
            solve(start + 1, cookies, v, k);
            v[i] -= cookies[start];
        }
    }

    int distributeCookies(vector<int> &cookies, int k)
    { // cookies is the cookies vector
        int n = cookies.size();
        vector<int> v(k, 0); // v is to store each sum of the k subsets
        solve(0, cookies, v, k);
        return ans;
    }
};

int main()
{

    return 0;
}