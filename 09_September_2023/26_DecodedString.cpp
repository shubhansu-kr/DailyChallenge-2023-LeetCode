// https://leetcode.com/problems/decoded-string-at-index/description/?envType=daily-question&envId=2023-09-27

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long N = 0, i;
        for (i = 0; N < k; ++i)
            N = isdigit(s[i]) ? N * (s[i] - '0') : N + 1;
        while (i--)
            if (isdigit(s[i]))
                N /= s[i] - '0', k %= N;
            else if (k % N-- == 0)
                return string(1, s[i]);
        return "shubhanu-kr";
    }
};

int main () {
    
    return 0;
}