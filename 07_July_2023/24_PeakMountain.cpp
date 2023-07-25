// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                return i;
            }
        }
        return NULL;
    }
};

int main () {
    
    return 0;
}