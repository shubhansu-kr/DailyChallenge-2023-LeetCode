// https://leetcode.com/problems/symmetric-tree/

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
    // WA : Wrong Answer since we are not considering multiple mirrors. 
    // Check mirror around intial root only. 
public:
    bool isSymmetric(TreeNode* root) {
        return checkSymmetry(root);
    }

    bool checkSymmetry(TreeNode *root) {
        if (!root) return true;

        // check left tree
        if (!checkSymmetry(root->left)) return false;

        // check right tree
        if (!checkSymmetry(root->right)) return false;

        if (root->left && root->right) return root->left->val == root->right->val;
        else if (!root->left && !root->right) return true;
        else return false;
    }
};

int main () {
    
    return 0;
}