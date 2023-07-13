// https://leetcode.com/problems/course-schedule/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses+1);
        for(auto &it: prerequisites){
            adj[it[1]].emplace_back(it[0]);
        }

        vector<int> vis(numCourses), path(numCourses);
        for (int i = 0; i < numCourses; ++i)
        {
            if (!vis[i] && dfs(numCourses, adj, vis, path, i)) return false;
        }
        
        return true;
    }

    bool dfs(int &n, vector<vector<int>> &adj, vector<int> &vis, vector<int> &path, int &i){
        if (path[i]) return true;
        if (vis[i]) return false;

        vis[i] = 1;
        path[i] = 1;

        for(int &it: adj[i]) {
            if (dfs(n, adj, vis, path, it)) return true;   
        }
        path[i] = 0;

        return false;
    }
};

int main () {
    
    return 0;
}