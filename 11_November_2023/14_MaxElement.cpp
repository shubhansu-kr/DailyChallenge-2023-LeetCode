// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/?envType=daily-question&envId=2023-11-15

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > res)
                res = res + 1;
        }
        return res;
    }
};

int main () {
    
    return 0;
}