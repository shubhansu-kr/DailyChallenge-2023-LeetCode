// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int left = 0, right = 25000000;
        for (int w : weights)
            left = max(left, w);
        while (left < right)
        {
            int mid = (left + right) / 2, need = 1, cur = 0;
            for (int i = 0; i < weights.size() && need <= days; cur += weights[i++])
                if (cur + weights[i] > mid)
                    cur = 0, need++;
            if (need > days)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

int main()
{

    return 0;
}