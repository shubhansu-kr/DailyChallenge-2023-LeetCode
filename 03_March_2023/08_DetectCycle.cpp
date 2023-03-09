// https://leetcode.com/problems/linked-list-cycle-ii/

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
    // BruteForce: Use set to find the repetive node
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *> _set;
        
        ListNode *p = head;
        while(p) {
            if (_set.count(p)) return p;
            _set.insert(p);
            p = p->next;
        }

        return nullptr;
    }
};

int main () {
    
    return 0;
}