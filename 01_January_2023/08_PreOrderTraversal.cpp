// https://leetcode.com/problems/binary-tree-preorder-traversal/

#include <bits/stdc++.h>
using namespace std ;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode *> stk;
        if (!root) return ans;
        stk.push(root);
        TreeNode *temp;
        while(stk.size()) {
            temp = stk.top();
            stk.pop();
            if (temp->right) stk.push(temp->right);
            if (temp->left) stk.push(temp->left);
            ans.emplace_back(temp->val);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }

    void solve(TreeNode *root, vector<int> &pre) {
        if(root == nullptr) return ;

        pre.emplace_back(root->val);
        solve(root->left, pre);
        solve(root->right, pre);
    }
};

int main () {
    
    return 0;
}