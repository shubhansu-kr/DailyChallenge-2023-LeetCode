// https://leetcode.com/problems/lfu-cache/

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int key, val, counter;
    ListNode * next;
    ListNode():val(0), key(0), counter(1), next(nullptr){}
    ListNode(int val, int key):val(val), key(key), counter(1), next(nullptr){}
    ListNode(int val, int key, ListNode *next):val(val), key(key), counter(1), next(next){}
};


// WA
class LFUCache {
public:
    LFUCache(int capacity) {
        cap = capacity;
        size = 0;
        head = tail = nullptr;
    }
    
    int get(int key) {
        if (!head) return -1;

        ListNode *p = head, *prev = nullptr;
        while(p != nullptr){
            if (p->key == key) 
            {
                if (p != tail){

                    ListNode *q = p, *pre = nullptr;
                    while(q && q->counter <= p->counter+1){
                        pre = q;
                        q = q->next;
                    }

                     
                     
                }

                


                p->counter++;
                return p->val;
            }
            prev = p;
            p = p->next;
        }
        return -1;
    }
    
    void put(int key, int value) {
        
    }

    ListNode *head, *tail;
    int cap, size;
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main () {
    
    unordered_map<int, pair<int, int>> _map;
    cout << _map[0].first << endl; // 0 

    return 0;
}