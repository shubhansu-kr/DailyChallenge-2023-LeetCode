// https://leetcode.com/problems/spiral-matrix-iii/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> visited(rows, vector<int>(cols)), ans;

        int i = rStart, j = cStart;
        int isValid = 1, s = 0, p = 0;

        vector<int> shiftRow = {0, 1, 0, -1}, shiftCol = {1, 0, -1, 0}; 
        while(ans.size() < rows * cols) {
            if (isValid) {
                visited[i][j] = 1;
                ans.emplace_back(vector<int>({i, j}));
            }

            int newRow = i + shiftRow[s];
            int newCol = j + shiftCol[s];

            // Invaid State
            if (newRow < 0 || newCol < 0 || newRow >= rows || newCol >= cols) {
                
            }

            if (visited[newRow][newCol]) {
                i += shiftRow[p];
                j += shiftCol[p];
            }
            else {
                i = newRow, j = newCol;
                p = s;
                s = (s+1) % 4;
            }
        }

        return ans;
    }
};

int main () {
    
    return 0;
}