// https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/?envType=daily-question&envId=2023-11-08

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int Chebyshev(int sx, int sy, int fx, int fy){
        return max(abs(sx-fx), abs(sy-fy) );
    }
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int d=Chebyshev(sx, sy, fx, fy);
        return d>0 ? t>=d: t!=1;
    }
};

int main () {
    
    return 0;
}