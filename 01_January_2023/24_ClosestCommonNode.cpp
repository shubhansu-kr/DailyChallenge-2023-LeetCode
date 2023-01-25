// https://leetcode.com/problems/find-closest-node-to-given-two-nodes/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // WA
    // edges = [2,2,3,-1], node1 = 0, node2 = 1
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int> visited(n, -1);

        for (int i = 0; i < n; ++i)
        {
            if (visited[node1] == 0 && visited[node2] == 1)
                return min(node1, node2);
            else if (visited[node2] == 1) 
                return node2;
            else if (visited[node1] == 0) 
                return node1;

            visited[node1] = 1;
            visited[node2] = 0;

            if (edges[node1] != -1) node1 = edges[node1];
            if (edges[node2] != -1) node2 = edges[node2];
        }
        return -1;
    }
};

int main () {
    
    return 0;
}