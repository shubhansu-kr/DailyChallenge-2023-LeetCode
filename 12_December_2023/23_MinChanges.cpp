// https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/?envType=daily-question&envId=2023-12-24

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int solve(string &s, char c){
        int count = 0;
        for(int i = 0; i < s.length(); ++i) {
            if (i % 2) {
                // odd : diff than c
                count += (s[i] == c);
            }
            else {
                // even : same as c
                count += (s[i] != c);
            }
        }
        return count;
    }

    int minOperations(string s) {
        return min(solve(s, '0'), solve(s, '1'));
    }
};

int main () {
    
    return 0;
}