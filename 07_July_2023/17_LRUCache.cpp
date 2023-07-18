// 

#include <bits/stdc++.h>
using namespace std ;

class LRUCache{
    size_t m_capacity;
    unordered_map<int,  list<pair<int, int>>::iterator> m_map; //m_map_iter->first: key, m_map_iter->second: list iterator;
    list<pair<int, int>> m_list;                               //m_list_iter->first: key, m_list_iter->second: value;
public:
    LRUCache(size_t capacity):m_capacity(capacity) {
    }
    int get(int key) {
        auto found_iter = m_map.find(key);
        if (found_iter == m_map.end()) //key doesn't exist
            return -1;
        m_list.splice(m_list.begin(), m_list, found_iter->second); //move the node corresponding to key to front
        return found_iter->second->second;                         //return value of the node
    }
    void set(int key, int value) {
        auto found_iter = m_map.find(key);
        if (found_iter != m_map.end()) //key exists
        {
            m_list.splice(m_list.begin(), m_list, found_iter->second); //move the node corresponding to key to front
            found_iter->second->second = value;                        //update value of the node
            return;
        }
        if (m_map.size() == m_capacity) //reached capacity
        {
           int key_to_del = m_list.back().first; 
           m_list.pop_back();            //remove node in list;
           m_map.erase(key_to_del);      //remove key in map
        }
        m_list.emplace_front(key, value);  //create new node in list
        m_map[key] = m_list.begin();       //create correspondence between key and node
    }
};

class LRUCache1 {
    int capacity;
    list<pair<int, int>> li;
    unordered_map<int, list<pair<int, int>>::iterator> um; 

public:
    LRUCache1(int capacity) : capacity{capacity} {}
    
    int get(int key) {
        if (um.find(key) == um.end()) return -1;
        li.splice(li.begin(), li, um[key]);
        return um[key]->second;
    }
    
    void put(int key, int value) {
        if (get(key) != -1) {
            um[key]->second = value;
            return;
        }
        
        if (um.size() == capacity) {
            int delKey = li.back().first;
            li.pop_back();
            um.erase(delKey);
        }
        
        li.emplace_front(key, value);
        um[key] = li.begin();
    }
};

int main () {
    
    return 0;
}