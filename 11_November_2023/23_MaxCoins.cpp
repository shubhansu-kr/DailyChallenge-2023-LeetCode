// https://leetcode.com/problems/maximum-number-of-coins-you-can-get/?envType=daily-question&envId=2023-11-24

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles), end(piles));
        int sum = 0;
        for (int i = piles.size() / 3; i < piles.size(); i = i + 2)
        {
            sum += piles[i];
        }
        return sum;
    }
};

int main () {
    
    return 0;
}