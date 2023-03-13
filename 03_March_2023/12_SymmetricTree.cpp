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
public:
    bool isSymmetric(TreeNode *root) {
        TreeNode *left, *right;
        if (!root)
            return true;
        
        queue<TreeNode*> q1, q2;
        q1.push(root->left);
        q2.push(root->right);
        while (!q1.empty() && !q2.empty()){
            left = q1.front();
            q1.pop();
            right = q2.front();
            q2.pop();
            if (NULL == left && NULL == right)
                continue;
            if (NULL == left || NULL == right)
                return false;
            if (left->val != right->val)
                return false;
            q1.push(left->left);
            q1.push(left->right);
            q2.push(right->right);
            q2.push(right->left);
        }
        return true;
    }
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