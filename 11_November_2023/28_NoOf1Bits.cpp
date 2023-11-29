// https://leetcode.com/problems/number-of-1-bits/?envType=daily-question&envId=2023-11-29

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int setBitCount = 0;
        while (n != 0) {
            n &= (n - 1);
            ++setBitCount;
        }
        return setBitCount;
    }
};

int main () {
    
    return 0;
}