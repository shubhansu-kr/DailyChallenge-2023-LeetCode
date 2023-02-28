// https://leetcode.com/problems/find-duplicate-subtrees/

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
    // BruteForce: Use set to track the duplicate structure.
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode *> ans;
        set<vector<int>> st;
        set<vector<int>> st_ans;

        inOrderTraversal(root, st, st_ans, ans);
        return ans;
    }

    void inOrderTraversal(TreeNode *root, set<vector<int>> &st, set<vector<int>> &st_ans, vector<TreeNode *> &ans) {
        if (!root) return;

        vector<int> temp;

        inOrderTraversal(root->left, st, st_ans, ans);
        collectNode(root, temp);
        inOrderTraversal(root->right, st, st_ans, ans);

        if (st.count(temp)) {
            if (!st_ans.count(temp)) {
                ans.emplace_back(root);
                st_ans.insert(temp);
            }
        }
        else st.insert(temp);
    }

    void collectNode(TreeNode *root, vector<int> &temp) {
        if (!root) {
            temp.emplace_back(777);
            return;
        }

        collectNode(root->left, temp);
        temp.emplace_back(root->val);
        collectNode(root->right, temp);
    }
};

int main () {
    
    return 0;
}