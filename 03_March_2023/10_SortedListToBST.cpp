// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int val) : val(val), next(nullptr) {}
    ListNode(int val, ListNode *next) : val(val), next(next) {}
};

class Solution
{
public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        return sortedListToBST(head, NULL);
    }
private:
    TreeNode *sortedListToBST(ListNode *head, ListNode *tail)
    {
        if (head == tail)
            return NULL;
        if (head->next == tail) 
        {
            TreeNode *root = new TreeNode(head->val);
            return root;
        }
        ListNode *mid = head, *temp = head;
        while (temp != tail && temp->next != tail) 
        {
            mid = mid->next;
            temp = temp->next->next;
        }
        TreeNode *root = new TreeNode(mid->val);
        root->left = sortedListToBST(head, mid);
        root->right = sortedListToBST(mid->next, tail);
        return root;
    }
};

int main()
{

    return 0;
}