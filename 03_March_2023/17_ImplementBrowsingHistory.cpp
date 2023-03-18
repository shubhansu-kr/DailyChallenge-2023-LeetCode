// https://leetcode.com/problems/design-browser-history/

#include <bits/stdc++.h>
using namespace std ;

struct node
{
    string val;
    node *next;
    node() : val(0), next(nullptr) {}
    node(string x) : val(x), next(nullptr) {}
    node(string x, node *next) : val(x), next(next) {}
};

class BrowserHistory
{
    node *home;
    // int count, curr;
    // Lets use a current pointer and end pointer instead
    node *curr;
    node *end;

public:
    // Apply using linked list
    // Treat evey object as a tab of the browser

    BrowserHistory(string homepage)
    {
        home = new node(homepage);
        end = curr = home;
    }

    void visit(string url)
    {
        // Visit adds a url to the next of the current node.
        node *add = new node(url);
        node *temp = curr->next;
        curr->next = add;
        curr = add;

        // deleting each and every hanging node
        while (temp != end && temp != NULL)
        {
            node *del = temp;
            temp = temp->next;
            delete (del);
        }
        if (temp) {
            delete (temp);
        }
        

        // update the end pointer
        end = add;
    }

    string back(int steps)
    {
        // Iterate
        // Going back in a singly linked list is not direct
        // Should i use a doubly linked list ?

        int currentNode = 0;
        node *x = home;
        while (x != curr)
        {
            x = x->next;
            currentNode++;
        }
        if (steps >= currentNode)
        {
            curr = home ;
            return home->val;
        }
        currentNode -= steps;
        node *p = home;
        int i = 0;
        while (i != currentNode)
        {
            p = p->next;
            i++;
        }
        curr = p ;
        return p->val;
    }

    // forward in O(n)
    string forward(int steps)
    {
        // Iterate
        // Moving forward is relatively easy
        while (steps)
        {
            if (curr == end)
            {
                break;
            }
            curr = curr->next;
            steps--;
        }
        return curr->val;
    }
};

int main () {
    
    return 0;
}