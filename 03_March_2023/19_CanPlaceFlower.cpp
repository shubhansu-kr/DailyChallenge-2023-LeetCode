// https://leetcode.com/problems/can-place-flowers/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0, freq = 0;
        for(auto &it: flowerbed) {
            if (it == 1) {
                count += (freq/2);
                freq = -1;
            }
            else {
                ++freq;
            }
        }
        ++freq;
        count += (freq/2);

        return count >= n;
    }
};

int main () {
    
    return 0;
}