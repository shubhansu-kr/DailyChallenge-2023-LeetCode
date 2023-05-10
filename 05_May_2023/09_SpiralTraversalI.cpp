// https://leetcode.com/problems/spiral-matrix-ii/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int>(n));

        int i = 0, j = 0, k = 1, s = 0;                                 // Pointers
        int leftWall = -1, topWall = -1, rightWall = n, bottomWall = n; // Walls
        vector<int> shiftRow = {0, 1, 0, -1}, shiftCol = {1, 0, -1, 0}; // Shifters

        while (k <= n * n)
        {
            ans[i][j] = k++;

            i += shiftRow[s];
            j += shiftCol[s];

            // Check Validity
            if (j == rightWall || j == leftWall || i == bottomWall || i == topWall)
            {
                // Invalid state.
                i -= shiftRow[s];
                j -= shiftCol[s];

                s = (s + 1) % 4;

                // Update walls
                switch (s)
                {
                    case 1:
                        ++topWall;
                        break;
                    case 2:
                        --rightWall;
                        break;
                    case 3:
                        --bottomWall;
                        break;
                    case 0:
                        ++leftWall;
                        break;
                    default:
                        break;
                }

                // Update Pointer
                i += shiftRow[s];
                j += shiftCol[s];
            }

        }
        
        return ans;
    }
};

int main () {
    
    return 0;
}