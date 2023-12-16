// https://leetcode.com/problems/valid-anagram/?envType=daily-question&envId=2023-12-16

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};

int main () {
    
    return 0;
}