// https://leetcode.com/problems/unique-binary-search-trees-ii/

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
    vector<TreeNode *> solve(int ind, int end)
    {
        if (ind > end) return {NULL};
        if (ind == end) return {new TreeNode(ind)};

        vector<TreeNode *> ans;
        for (int i = ind; i <= end; i++)
        {

            vector<TreeNode *> left = solve(ind, i - 1);
            vector<TreeNode *> right = solve(i + 1, end);

            for (auto l : left)
            {
                for (auto r : right)
                {
                    TreeNode *root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    
    vector<TreeNode *> generateTrees(int n)
    {
        return solve(1, n);
    }
};

int main()
{

    return 0;
}