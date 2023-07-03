// https://leetcode.com/problems/buddy-strings/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length())
        {
            return false;
        }
        // Equal length string
        // Check for inequality
        vector<int> p;
        set<char> q;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (!flag)
            {
                if (!q.count(s[i]))
                {
                    q.insert(s[i]);
                }
                else
                {
                    flag = 1;
                }
            }
            if (s[i] != goal[i])
            {
                p.push_back(i);
            }
        }
        if (p.size() == 2)
        {
            swap(s[p[0]], s[p[1]]);
        }
        if (p.size() == 0 )
        {
            if (flag) {
                return true ;
            }
            return false ;
        }
        return s == goal;
    }
};

int main () {
    
    return 0;
}