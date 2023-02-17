// https://leetcode.com/problems/minimum-distance-between-bst-nodes/

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
    // WA :  [90,69,null,49,89,null,52]
    // Expected: 1 
    // Output: 3
public:
    int minDiffInBST(TreeNode* root) {
        if (!root) return INT_MAX;
        int p1 = INT_MAX, p2 = INT_MAX;

        if (root->left) p1 = root->val - root->left->val;
        if (root->right) p2 = root->right->val - root->val;

        return min(min(p1, minDiffInBST(root->left)), min(p2, minDiffInBST(root->right)));
    }
};


int main () {
    
    return 0;
}