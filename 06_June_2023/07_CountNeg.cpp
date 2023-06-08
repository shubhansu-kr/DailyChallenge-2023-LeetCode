// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // [
    // [5,1,0],
    // [-5,-5,-5]
    // ]
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();

        int rightWall = cols, bottomWall = rows;
        int count = 0;

        for (int i = 0; i < bottomWall; ++i)
        {
            for (int j = 0; j < rightWall; ++j)
            {
                if (grid[i][j] < 0) {
                    count += (rightWall-j)*(bottomWall-i);
                    rightWall = j;
                }
            }
            if (rightWall == 0) break;
        }
        
        return count;
    }
};

int main () {
    
    return 0;
}