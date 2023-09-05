// https://leetcode.com/problems/copy-list-with-random-pointer/

#include <bits/stdc++.h>
using namespace std ;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    // BruteForce
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        Node *head1 = new Node(head->val);

        Node *p = head->next, *prev = head1;
        vector<Node *> mp = {head1};

        // Creates a normal linked list.
        while(p) {
            Node *q = new Node(p->val);
            prev->next = q;
            prev = q;
            p = p->next;
            mp.emplace_back(q);
        }

        p = head;
        int n = mp.size();
        vector<int> random(n, -1);

        for (int i = 0; i < n; ++i)
        {   
            if (p->random != nullptr){
                int count = 0;
                Node *q = head;
                while(q && q != p->random) {
                    q = q->next;
                    count++;
                }
                random[i] = count;
            }
            p = p->next;
        }

        p = head1;
        for (int i = 0; i < n; ++i)
        {
            if (random[i] != -1){
                p->random = mp[random[i]];
            }
            p = p->next;
        }

        return head1;
    }
};

int main () {
    
    return 0;
}