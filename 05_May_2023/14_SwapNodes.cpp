// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

#include <bits/stdc++.h>
using namespace std;

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
    ListNode *swapNodes(ListNode *head, int k)
    {
        // April 2022 - Daily challenge (Already solved this question before)
        ListNode *ptr = head;
        int i = 1;
        ListNode *first = NULL;
        ListNode *second = NULL;
        while (ptr != NULL)
        {
            if (second)
            {
                second = second->next;
            }
            if (i == k)
            {
                first = ptr;
                second = head;
            }
            ptr = ptr->next;
            i++;
        }
        swap(first->val, second->val);
        return head;
    }
};

int main()
{

    return 0;
}