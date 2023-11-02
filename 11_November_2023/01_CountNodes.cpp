// https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/?envType=daily-question&envId=2023-11-02

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
    pair<int, int> treeSum(TreeNode *root, int &ans) {
        if (!root) return {0, 0};
        
        int rVal = root->val;
        int count = 1;
        
        pair<int, int> leftCall = treeSum(root->left, ans), rightCall = treeSum(root->right, ans);

        int nodesCount = (count + leftCall.first + rightCall.first);
        int sum = (rVal + leftCall.second + rightCall.second);

        ans += (rVal == (sum/nodesCount));

        return pair<int, int>({nodesCount , sum});
    }

    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        pair<int, int> p = treeSum(root, ans);
        return ans;
    }
};

int main () {
    
    return 0;
}