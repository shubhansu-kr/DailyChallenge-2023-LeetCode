// https://leetcode.com/problems/linked-list-random-node/

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

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

class Solution
{
    // Reservoir Sampling Method : 
public:
    ListNode *HeadNode;
    Solution(ListNode *head)
    {
        HeadNode = head;
    }
    // returns value of a random node
    int getRandom()
    {
        int res, len = 1;
        ListNode *x = HeadNode;
        while (x)
        {
            if (rand() % len == 0)
            {
                res = x->val;
            }
            len++;
            x = x->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */

int main () {
    
    return 0;
}