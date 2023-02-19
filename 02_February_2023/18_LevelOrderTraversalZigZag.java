// class TreeNode {
//     int val;
//     TreeNode left;
//     TreeNode right;

//     TreeNode() {
//     }

//     TreeNode(int val) {
//         this.val = val;
//     }

//     TreeNode(int val, TreeNode left, TreeNode right) {
//         this.val = val;
//         this.left = left;
//         this.right = right;
//     }
// }

// class Solution {
//     List<List<Integer>> zigzagLevelOrder(TreeNode root) {
//         List<List<Integer>> ans;
//         traversal(ans, root);
//         return ans;
//     }

//     void traversal(List<List<Integer>> &ans, TreeNode root, Integer i = 0) {
//         if (!root) return;

//         if (i >= ans.size()) {ans.emplace_back(List<Integer>());}
//         traversal(ans, root->left, i+1);

//         if (i % 2) {
//             // odd level: Reverse order
//             ans[i].insert(ans[i].begin(), root->val);
//         }
//         else {
//             // even level: Straight order
//             ans[i].emplace_back(root->val);
//         }

//         traversal(ans, root->right, i+1);

//         return;
//     }
// }