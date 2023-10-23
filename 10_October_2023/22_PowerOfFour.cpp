// https://leetcode.com/problems/power-of-four/?envType=daily-question&envId=2023-10-23

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isPowerOfFour(int n) {
        return (n > 0 && !(n & (n - 1)) && (n - 1) % 3 == 0);
    }
};

int main () {
    
    return 0;
}