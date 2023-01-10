// https://leetcode.com/problems/same-tree/

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
    // Using Stack: PreOrder traversal
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        stack<TreeNode *> a, b;
        TreeNode *temp1, *temp2;
        a.push(p);
        b.push(q);
        while(a.size() || b.size()) {
            if (!(a.size() && b.size())) return false;
            temp1 = a.top();
            temp2 = b.top();

            a.pop();
            b.pop();

            if (temp1 == nullptr && temp2 == nullptr) {
                //
            }
            else if (temp1 && temp2 && temp1->val == temp2->val){
                a.push(temp1->right);
                a.push(temp1->left);

                b.push(temp2->right);
                b.push(temp2->left);
            }
            else return false;            
        }  
        return true;
    }
};

int main () {
    
}