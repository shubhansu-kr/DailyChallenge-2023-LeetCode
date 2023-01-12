// https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // Wrong answer 
    // 4 [[0,2],[0,3],[1,2]] "aeed"
public:
    vector<vector<int>> createAdj(vector<vector<int>> &edges){
        int n = edges.size()+1;
        vector<vector<int>> adj(n, vector<int>(n, 0));
        for(auto &it: edges) adj[it[0]][it[1]] = 1;
        return adj;
    }

    int countSubTree(vector<vector<int>> &adj, char &label, string &labels, int &num) {
        int count = label == labels[num];
        for (int i = 0; i < adj.size(); ++i) if (adj[num][i]) count += countSubTree(adj, label, labels, i);
        return count;
    }

    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        vector<vector<int>> adj = createAdj(edges);
        vector<int> ans(n, 0); 
        for (int i = 0; i < n; ++i) ans[i] = countSubTree(adj, labels[i], labels, i);
        return ans;
    }
};

class Solution
{
    // Wrong Answer: 
    // 7 [[0,1],[1,2],[2,3],[3,4],[4,5],[5,6]] "aaabaaa"

    // Passing labels as string looses refrence to original label
    // pass char instead
public:
    vector<vector<int>> createAdj(vector<vector<int>> &edges){
        int n = edges.size()+1;
        vector<vector<int>> adj(n, vector<int>(n, 0));
        for(auto &it: edges) adj[it[0]][it[1]] = 1;
        return adj;
    }

    int countSubTree(vector<vector<int>> &adj, string &labels, int &num) {
        int count = 1;
        for (int i = 0; i < labels.size(); ++i) if (adj[num][i] && labels[i] == labels[num]) count += countSubTree(adj, labels, i);
        return count;
    }

    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        vector<vector<int>> adj = createAdj(edges);
        vector<int> ans(n, 0); 
        for (int i = 0; i < n; ++i) ans[i] = countSubTree(adj, labels, i);
        return ans;
    }
};


int main()
{

    return 0;
}