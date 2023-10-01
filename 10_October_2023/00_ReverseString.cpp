// https://leetcode.com/problems/reverse-words-in-a-string-iii/?envType=daily-question&envId=2023-10-01

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string reverseWords(string s) {
        int f = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ') {
                reverse(s.begin()+f, s.begin()+i);
                f = i+1;
            }
        }
        reverse(s.begin()+f, s.end());
        return s; 
    }
};

int main () {
    
    return 0;
}