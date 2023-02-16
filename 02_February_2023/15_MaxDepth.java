/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    static int max (int a, int b) {
        if (a > b) return a;
        return b;
    }
    public int maxDepth(TreeNode root) {
        if (root == null) return 0;

        return 1 + max(maxDepth(root.left), maxDepth(root.right));
    }
}