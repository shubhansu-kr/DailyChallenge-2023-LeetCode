// https://leetcode.com/problems/add-two-numbers-ii/

#include <bits/stdc++.h>
using namespace std ;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *prev = NULL;
        ListNode *temp;
        while (l1 != NULL)
        {
            temp = l1->next;
            l1->next = prev;
            prev = l1;
            l1 = temp;
        }
        l1 = prev;
        prev = NULL;
        while (l2 != NULL)
        {
            temp = l2->next;
            l2->next = prev;
            prev = l2;
            l2 = temp;
        }
        l2 = prev;
        ListNode *p = l1;
        ListNode *q = l2;
        ListNode *prevP;

        int carry = 0;
        while (p != NULL || q != NULL)
        {
            if (q == NULL)
            {
                int sum = p->val + carry;
                p->val = sum % 10;
                carry = sum / 10;

                prevP = p;
                p = p->next;
                if (carry)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (p == NULL)
            {
                if (prevP->next == NULL)
                {
                    prevP->next = q;
                }
                int sum = q->val + carry;
                q->val = sum % 10;
                carry = sum / 10;

                prevP = q;
                q = q->next;
                if (carry)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }

            int sum = p->val + q->val;
            p->val = (sum + carry) % 10;
            carry = (sum + carry) / 10;

            prevP = p;
            p = p->next;
            q = q->next;
        }

        if (carry)
        {
            prevP->next = new ListNode(carry, NULL);
        }
        prev = NULL ;
        while (l1 != NULL)
        {
            temp = l1->next;
            l1->next = prev;
            prev = l1;
            l1 = temp;
        }
        l1 = prev;
        return l1;
    }
};

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

int main () {
    
    return 0;
}