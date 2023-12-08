// https://leetcode.com/problems/construct-string-from-binary-tree/?envType=daily-question&envId=2023-12-08

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
    string tree2str(TreeNode* root) {
        if (root == nullptr) {
            return "";
        }

        stringstream result;

        preorderTraversal(root, result);

        return result.str();
    }

private:
    void preorderTraversal(TreeNode* node, stringstream& result) {
        if (node == nullptr) {
            return;
        }

        result << node->val;

        if (node->left != nullptr || node->right != nullptr) {

            result << "(";
            preorderTraversal(node->left, result);
            result << ")";
        }

        if (node->right != nullptr) {
            result << "(";
            preorderTraversal(node->right, result);
            result << ")";
        }

    }
};

int main () {
    
    return 0;
}