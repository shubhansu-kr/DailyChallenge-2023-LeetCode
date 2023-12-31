// https://leetcode.com/problems/largest-substring-between-two-equal-characters/?envType=daily-question&envId=2023-12-31

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(std::string s) {
        int current = s.length() - 1;
        for (int i = s.length() - 1; i > 0; i--) {
            for (int j = 0; j + i < s.length(); j++) {
                if (s[j] == s[j + i]) {
                    return i - 1;
                }
            }
            current--;
        }
        return -1;
    }
};

int main () {
    
    return 0;
}