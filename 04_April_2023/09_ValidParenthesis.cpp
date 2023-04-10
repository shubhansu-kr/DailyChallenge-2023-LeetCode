// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isValid(string s) {
        stack<char> par; 
        for(auto &it: s)
        {
            if (it == '(' || it == '{' || it == '[') {
                par.push(it);
            }
            else {
                if (!par.size()) return false;
                if (it == ')' && par.top() != '(' || it == '}' && par.top() != '{' || it == ']' && par.top() != '[') return false;

                par.pop();
            }
        }
        return par.size() == 0;
    }
};

int main () {
    
    return 0;
}