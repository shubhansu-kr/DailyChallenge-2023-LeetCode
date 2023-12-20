// https://leetcode.com/problems/buy-two-chocolates/?envType=daily-question&envId=2023-12-20

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();

        int mini = INT_MAX, mini1 = INT_MAX;
        for(int i = 0; i < n; ++i){
            if (prices[i] <= mini){
                mini1 = mini;
                mini = prices[i];
            }
            else if (prices[i] < mini1) {
                mini1 = prices[i];
            }
        }

        int leftOver = money - (mini + mini1);

        return leftOver < 0 ? money : leftOver;
    }
};

int main () {
    
    return 0;
}