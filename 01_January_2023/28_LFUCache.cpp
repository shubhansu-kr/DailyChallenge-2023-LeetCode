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

class LFUCache {
    int cap;
    int size;
    int minFreq;
    unordered_map<int, pair<int, int>> m; //key to {value,freq};
    unordered_map<int, list<int>::iterator> mIter; //key to list iterator;
    unordered_map<int, list<int>>  fm;  //freq to key list;
public:
    LFUCache(int capacity) {
        cap=capacity;
        size=0;
    }
    
    int get(int key) {
        if(m.count(key)==0) return -1;
        
        fm[m[key].second].erase(mIter[key]);
        m[key].second++;
        fm[m[key].second].push_back(key);
        mIter[key]=--fm[m[key].second].end();
        
        if(fm[minFreq].size()==0 ) 
              minFreq++;
        
        return m[key].first;
    }
    
   void set(int key, int value) {
        if(cap<=0) return;
        
        int storedValue=get(key);
        if(storedValue!=-1)
        {
            m[key].first=value;
            return;
        }
        
        if(size>=cap )
        {
            m.erase( fm[minFreq].front() );
            mIter.erase( fm[minFreq].front() );
            fm[minFreq].pop_front();
            size--;
        }
        
        m[key]={value, 1};
        fm[1].push_back(key);
        mIter[key]=--fm[1].end();
        minFreq=1;
        size++;
    }
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