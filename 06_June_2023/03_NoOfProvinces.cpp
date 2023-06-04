// https://leetcode.com/problems/number-of-provinces/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        vector<int> visited(isConnected.size(), 0);
        int prov = 0;
        for (int i = 0; i < isConnected.size(); ++i)
        {
            if (!visited[i])
            {
                ++prov;
                DFS(isConnected, visited, i);
            }
        }
        return prov;
    }
    void DFS(vector<vector<int>> &list, vector<int> &visited, int node)
    {
        visited[node] = 1;
        for (int i = 0; i < list.size(); ++i)
        {
            if (!list[node][i] || visited[i]) continue;
            else DFS(list, visited, i);
        }
    }
};

int main () {
    
    return 0;
}