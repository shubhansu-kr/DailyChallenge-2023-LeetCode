// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        traversal(ans, root);
        return ans;
    }
    void traversal(vector<vector<int>> &ans, TreeNode *root, int i = 0) {
        if (!root) return;

        if (i >= ans.size()) {ans.emplace_back(vector<int>());}
        traversal(ans, root->left, i+1);

        if (i % 2) {
            // odd level: Reverse order
            ans[i].insert(ans[i].begin(), root->val);
        }
        else {
            // even level: Straight order
            ans[i].emplace_back(root->val);
        }

        traversal(ans, root->right, i+1);

        return;
    }
};

int main () {
    
    return 0;
}