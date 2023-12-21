// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/?envType=daily-question&envId=2023-12-21

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int max = 0 ;
        for(int i =0;i <points.size()-1; ++i) {
            if (max < points[i+1][0]-points[i][0]){
                max = points[i+1][0]-points[i][0];
            }
        }
        return max; 
    }
};

int main () {
    
    return 0;
}