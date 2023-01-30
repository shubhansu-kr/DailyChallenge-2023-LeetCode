// https://leetcode.com/problems/n-th-tribonacci-number/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // Recursion: BruteForce
public:
    int tribonacci(int n) {
        return solve(n);
    }

    int solve(int n){
        if (n < 2) return n != 0;
        return solve(n-1)+solve(n-2)+solve(n-3);
    }
};

int main () {
    
    return 0;
}