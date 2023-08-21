// https://leetcode.com/problems/repeated-substring-pattern/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool checkSubString(string &s, int &len) {
        string ref = s.substr(0, len);
        for (int i = len; i < s.length(); i=i+len)
        {
            if (s.substr(i, len) != ref) return false;
        }
        
        return true;
    }

    bool repeatedSubstringPattern(string s) {
        int len = s.length();
        for (int i = len/2; i > 0; --i)
        {
            if (len % i == 0) {
                // check possibility
                
                if (checkSubString(s, i)) return true;
            }
        }
        
        return false;
    }
};

int main () {
    
    return 0;
}