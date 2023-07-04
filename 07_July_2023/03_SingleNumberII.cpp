// https://leetcode.com/problems/single-number-ii/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        
        for(auto x: nums){
            m[x]++;
        }

        for(auto x: m){
            if(x.second == 1){
                return x.first;
            }
        }
        
        return -1;
    }
};

int main () {
    
    return 0;
}