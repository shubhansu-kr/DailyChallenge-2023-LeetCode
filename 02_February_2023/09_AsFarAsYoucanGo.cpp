// https://leetcode.com/problems/as-far-from-land-as-possible/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // BFS : Flood Fill
public:
    int maxDistance(vector<vector<int>>& grid) {
        int ans = -1, n = grid.size(), flag = 1, flag1 = 1;
        vector<vector<int>> vis(n, vector<int>(n, 0));

        queue<pair<int, int>> q;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j]) q.push({i, j}), vis[i][j] = 1, flag = 0;
                else flag1 = 0;
            }
        }
        
        if (flag || flag1) return ans;

        vector<int> rowShift = {-1, 0, +1, 0}, colShift = {0, -1, 0, +1};

        while(q.size()) {
            pair<int, int> temp = q.front();
            q.pop();

            int r = temp.first, c = temp.second, nRow, nCol;

            for (int i = 0; i < 4; ++i)
            {
                nRow = r + rowShift[i];
                nCol = c + colShift[i];

                // if Valid index
                if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < n) {
                    if (!grid[nRow][nCol] && !vis[nRow][nCol]) {
                        vis[nRow][nCol] = vis[r][c] + 1;
                        ans = max(ans, vis[r][c]);
                        q.push({nRow, nCol});
                    }
                }
            }
        }
        return ans;
    }   
};

int main () {
    
    return 0;
}