// https://leetcode.com/problems/removing-stars-from-a-string/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string removeStars(string s) {
        stack<char> q;

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '*') {
                q.pop();
            }
            else {
                q.push(s[i]);
            }
        }
        string ans;
        while(q.size()) {
            ans += q.top();
            q.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main () {
    
    return 0;
}