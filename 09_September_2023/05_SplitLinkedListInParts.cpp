// https://leetcode.com/problems/split-linked-list-in-parts/

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode *> res(k, nullptr);
        ListNode *curr = head;
        int count = 0;
        while (curr != NULL)
        {
            curr = curr->next;
            count++;
        }
        if (count == 0)
        {
            return res;
        }
        int length = count / k;
        int freq;
        count <= k ? freq = 0 : freq = count % k;
        for (int i = 0; i < k; i++)
        {
            if (head == NULL)
            {
                break;
            }
            if (freq == i)
            {
                freq = 0;
            }
            ListNode *temp = new ListNode(head->val);
            head = head->next;
            ListNode *ptr = temp;
            for (int j = 1; j < length + freq; j++)
            {
                temp->next = new ListNode(head->val);
                temp = temp->next;
                head = head->next;
            }

            res[i] = ptr;
        }
        return res;
    }
};


class Solution1 {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode *> res(k, nullptr);
        // Get the count of nodes
        ListNode *p = head;
        int count = 0, l, f;
        while (p != NULL)
        {
            p = p->next;
            count++;
        }

        if (count == 0)
        {
            return res;
        }

        if (k >= count)
        {
            l = 2;
            f = 0;
        }
        else
        {
            l = count / k + 1;
            f = count % k;
        }

        for (int i = 0; i < k; i++)
        {
            if (head == NULL)
            {
                break;
            }
            if (f == 0)
            {
                l--;
            }
            ListNode *temp = head;
            ListNode *prev;
            for (int j = 0; j < l; j++)
            {
                if (j == l - 1)
                {
                    prev = temp;
                }
                temp = temp->next;
            }
            prev->next = NULL;
            res[i] = head;
            head = temp;
            f--;
        }
        return res;
    }
};

int main () {
    
    return 0;
}