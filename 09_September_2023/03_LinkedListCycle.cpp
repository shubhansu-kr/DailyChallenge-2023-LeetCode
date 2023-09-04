// https://leetcode.com/problems/linked-list-cycle/?envType=daily-question&envId=2023-09-04

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
    bool hasCycle(ListNode *head) {
        
        ListNode *p = head;
        ListNode *q = head;
        while (q != NULL && q->next != NULL)
        {
            p = p->next;
            q = q->next->next;

            if (p == q)
            {
                return true;
            }
        }
        return false;
    }
};

int main () {
    
    return 0;
}