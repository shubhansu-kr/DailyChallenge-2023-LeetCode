// https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> ans;
    map<TreeNode *, TreeNode *> parent; // son=>parent
    set<TreeNode *> visit;              // record visied node

    void findParent(TreeNode *node)
    {
        if (!node) return;
        if (node->left)
        {
            parent[node->left] = node;
            findParent(node->left);
        }
        if (node->right)
        {
            parent[node->right] = node;
            findParent(node->right);
        }
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int K)
    {
        if (!root) return {};

        findParent(root);
        dfs(target, K);

        return ans;
    }

    void dfs(TreeNode *node, int K)
    {
        if (visit.find(node) != visit.end()) return;
        visit.insert(node);
        if (K == 0)
        {
            ans.push_back(node->val);
            return;
        }
        if (node->left)
        {
            dfs(node->left, K - 1);
        }
        if (node->right)
        {
            dfs(node->right, K - 1);
        }

        TreeNode *p = parent[node];
        
        if (p) dfs(p, K - 1);
    }
};

int main()
{

    return 0;
}