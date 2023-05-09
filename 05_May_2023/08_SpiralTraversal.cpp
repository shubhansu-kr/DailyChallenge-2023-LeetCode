// https://leetcode.com/problems/spiral-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        // Inputs:
        int m = matrix.size(), n = matrix[0].size();

        // Solution:

        vector<int> ans(m * n);

        int i = 0, j = 0, k = 0, s = 0;                                 // Pointers
        int leftWall = -1, topWall = -1, rightWall = n, bottomWall = m; // Walls
        vector<int> shiftRow = {0, 1, 0, -1}, shiftCol = {1, 0, -1, 0}; // Shifters

        while (k < m * n)
        {
            ans[k++] = matrix[i][j];

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

int main()
{

    return 0;
}