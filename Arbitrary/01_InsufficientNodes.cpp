// https://leetcode.com/problems/insufficient-nodes-in-root-to-leaf-paths/  

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
    int solve(TreeNode *root, TreeNode *prev, int dir, int limit) {
        if (!root) return 0;

        int rt = root->val, left = -1e7, right = -1e7;

        if (root->left && root->right) {
            left = solve(root->left, root, -1, limit-(rt));   
            right = solve(root->right, root, 1, limit-(rt));
        }
        else if (root->left) {
            left = solve(root->left, root, -1, limit-(rt));   
        }
        else if (root->right) {
            right = solve(root->right, root, 1, limit-(rt));
        }
        else {
            left = right = 0;
        }

        int sum = max(left, right) + rt;

        if (sum < limit) {
            // delete node 
            if (dir == -1) prev->left = nullptr;
            else if (dir == 1) prev->right = nullptr;
            else {
                root = nullptr;
            }
        }
        
        return sum;
    }

    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        int x = solve(root, nullptr, 0, limit);
        if (x == INT_MIN) return nullptr;
        return root;
    }
};

int main () {
    
    return 0;
}