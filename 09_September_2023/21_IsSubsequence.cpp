// https://leetcode.com/problems/is-subsequence/description/?envType=daily-question&envId=2023-09-22

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while(i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                ++i; ++j;
            }
            else {
                ++j;
            }
        }

        return i == s.length();
    }
};

int main () {
    
    return 0;
}