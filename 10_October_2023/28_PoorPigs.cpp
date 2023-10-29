// https://leetcode.com/problems/poor-pigs/description/?envType=daily-question&envId=2023-10-29

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
                return ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};

int main () {
    
    return 0;
}