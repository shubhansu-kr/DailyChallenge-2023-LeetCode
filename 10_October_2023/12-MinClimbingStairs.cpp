// https://leetcode.com/problems/min-cost-climbing-stairs/?envType=daily-question&envId=2023-10-13

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prev = cost[0], prev1 = cost[1];
        for (int i = 2; i < cost.size(); ++i)
        {
            int temp = prev1;
            prev1 = cost[i] + min(prev, prev1);
            prev = temp;
        }
        return min(prev, prev1);
    }
};

int main () {
    
    return 0;
}