// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int countOdds(int low, int high) {
        return (high-low)/2 + !(high % 2 == 0 && low % 2 == 0);
    }
};

int main () {
    
    return 0;
}