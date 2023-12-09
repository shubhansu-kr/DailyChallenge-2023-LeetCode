// https://leetcode.com/problems/binary-tree-inorder-traversal/?envType=daily-question&envId=2023-12-09

#include <bits/stdc++.h>
using namespace std ;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    void solve(TreeNode *root, vector<int> &tra){
        if (!root) return;

        solve(root->left, tra);
        tra.emplace_back(root->val);
        solve(root->right, tra);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};

int main () {
    
    return 0;
}