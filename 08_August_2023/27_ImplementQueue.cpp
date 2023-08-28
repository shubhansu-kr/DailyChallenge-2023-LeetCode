// https://leetcode.com/problems/implement-stack-using-queues/      

#include <bits/stdc++.h>
using namespace std ;

class MyStack // Solution 1
{
    // Using queue
    queue<int> p, q;

public:
    MyStack()
    {
    }
    void push(int x)
    {
        p.push(x);
    }
    int pop()
    {
        // All the calls to pop is valid
        while (p.size() != 1)
        {
            q.push(p.front());
            p.pop();
        }
        int temp = p.front();
        p.pop();
        p.swap(q);
        return temp;
    }
    int top()
    {
        // All the calls to top is valid
        return p.back();
    }
    bool empty()
    {
        return p.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main () {
    
    return 0;
}