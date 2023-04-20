// https://leetcode.com/problems/maximum-width-of-binary-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    long val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(long x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(long x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        long max = 0;
        queue<pair<TreeNode*, long>> q;
        q.push(pair<TreeNode*, long>(root, 1));
        while (!q.empty()) {
            long l = q.front().second, r = l; // right started same as left
            for (long i = 0, n = q.size(); i < n; i++) {
                TreeNode* node = q.front().first;
                r = q.front().second;
                q.pop();
                if (node->left) q.push(pair<TreeNode*, long>(node->left, r * 2));
                if (node->right) q.push(pair<TreeNode*, long>(node->right, r * 2 + 1));
            }
            max = std::max(max, r + 1 - l);
        }
        return max;
    }
};

long main()
{

    return 0;
}