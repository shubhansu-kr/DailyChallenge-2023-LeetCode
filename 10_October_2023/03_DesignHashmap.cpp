// https://leetcode.com/problems/design-hashmap/description/?envType=daily-question&envId=2023-10-04

#include <bits/stdc++.h>
using namespace std ;

struct node
{
    int val, key;
    node *next;
    node() : val(0), key(0), next(nullptr) {}
    node(int x, int y) : val(x), key(y), next(nullptr) {}
    node(int x, int y, node *next) : val(x), key(y), next(next) {}
};

class MyHashMap
{
public:
    node *head;
    int size;
    MyHashMap()
    {
        head = nullptr;
        size = 0;
    }

    void put(int key, int value)
    {
        node *ptr = head, *prev = nullptr;
        while (ptr)
        {
            if (ptr->key >= key)
            {
                break;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr != nullptr && ptr->key == key)
        {
            ptr->val = value;
        }
        else
        {
            node *p = new node(value, key, ptr);
            ++size;
            if (prev == nullptr)
            {
                head = p;
            }
            else
            {
                prev->next = p;
            }
        }
    }

    int get(int key)
    {
        node *ptr = head;
        while (ptr)
        {
            
            if (ptr->key == key)
            {
                return ptr->val;
            }
            if (ptr->key > key)
            {
                return -1;
            }
            ptr = ptr->next;
        }
        return -1;
    }

    void remove(int key)
    {
        node *prev = nullptr, *ptr = head;
        while (ptr != nullptr && ptr->key != key)
        {
            if (ptr->key > key)
            {
                return;
            }
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr != nullptr)
        {
            if (prev == nullptr)
            {
                head = head->next;
                delete (ptr);
            }
            else
            {
                prev->next = ptr->next;
                delete (ptr);
            }
            --size;
        }
    }
};

int main () {
    
    return 0;
}