// https://leetcode.com/problems/backspace-string-compare/?envType=daily-question&envId=2023-10-19  


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k = processString(s);
        int p = processString(t);

        if (k != p) return false;

        for (int i = 0; i < k; i++) {
            if (s[i] != t[i]) return false;
        }

        return true;
    }

private:
    int processString(string& str) {
        int k = 0;
        for (char c : str) {
            if (c != '#') {
                str[k++] = c;
            } else if (k > 0) {
                k--;
            }
        }
        return k;
    }
};

int main () {
    
    return 0;
}