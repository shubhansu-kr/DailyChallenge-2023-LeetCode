// https://leetcode.com/problems/shortest-path-in-binary-matrix/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size(); int m=grid[0].size();
        if(n==0 || m==0 ) return -1;
        if(grid[0][0]!=0 || grid[n-1][m-1]!=0) return -1;
        
        grid[0][0]=1;
        queue<pair<int,int>> q;
        q.push({0,0});
        
        int dx[]={0,1,1,+1,0,-1,-1,-1};
        int dy[]={1,1,0,-1,-1,-1,0,1};
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            if(x==n-1 && y==m-1) return grid[x][y];
            
            for(int i=0;i<8;i++){
                int newx=x+dx[i];int newy=y+dy[i];
                if(newx>=0 && newy>=0 && newx<n && newy<m && grid[newx][newy]==0){
                    q.push({newx,newy});
                    grid[newx][newy]=1+grid[x][y];
                }
            }
            q.pop();
        }
        return -1;
    }
};

int main () {
    
    return 0;
}