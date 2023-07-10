// https://leetcode.com/problems/minimum-depth-of-binary-tree/

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
    int minDepth(TreeNode *root)
    {
        if (!root) return 0;

        int depth = 0;

        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            depth++;
            for (int i = 0; i < size; i++)
            {
                TreeNode *cur = q.front();
                q.pop();
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
                if (cur->left == NULL && cur->right == NULL) return depth;
            }
        }
        return depth;
    }
};

int main()
{

    return 0;
}