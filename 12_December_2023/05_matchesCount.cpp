// https://leetcode.com/problems/count-of-matches-in-tournament/?envType=daily-question&envId=2023-12-05

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int numberOfMatches(int n) {
        if (n <= 1) return 0;

        int teamAdvance = (n/2) + (n%2);

        return n/2 + numberOfMatches(teamAdvance); 
    }
};

int main () {
    
    return 0;
}