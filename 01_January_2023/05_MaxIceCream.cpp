// https://leetcode.com/problems/maximum-ice-cream-bars/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int bars = 0;
        while(bars < costs.size() && coins >= costs[bars]){
            coins -= costs[bars++];
        }
        return bars;
    }
};

int main () {
    
    return 0;
}