// https://leetcode.com/problems/swap-nodes-in-pairs/

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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        // Now Lets use recursion to swap every pair
        ListNode *temp = head->next;
        ListNode *p = temp->next;
        temp->next = head ;
        head->next = swapPairs(p);
        return temp;
    }
};

int main () {
    
    return 0;
}