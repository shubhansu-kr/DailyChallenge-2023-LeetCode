// https://leetcode.com/problems/last-stone-weight/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    // Intutive approach :(
    int lastStoneWeight(vector<int> &stones)
    {
        int n = stones.size();
        if (n == 1)
        {
            return stones[0];
        }
        while (true)
        {
            sort(stones.begin(), stones.end());
            if (stones[n - 1] > 0)
            {
                if (stones[n - 2] > 0)
                {
                    stones[n - 1] -= stones[n - 2];
                    stones[n - 2] = 0;
                }
                else
                {
                    return stones[n - 1];
                }
            }
            else
            {
                return stones[n - 1];
            }
        }
    }
};

int main () {
    
    return 0;
}