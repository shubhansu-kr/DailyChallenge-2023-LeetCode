// https://leetcode.com/problems/shortest-path-with-alternating-colors/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> createAdjList(int &n, vector<vector<int>> &edges) {
        vector<vector<int>> adj(n);
        for(auto &it: edges) {
            adj[it[0]].emplace_back(it[1]);
        }
        return adj;
    }

    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<int> ans(n, -1);
        vector<vector<int>> vis(n, vector<int>(n));

        vector<vector<int>> redAdj = createAdjList(n, redEdges), blueAdj = createAdjList(n, blueEdges);

        // Two adjList | n | Apply Dijkstra Algo. 



    }
};

    
int main () {
    
    return 0;
}