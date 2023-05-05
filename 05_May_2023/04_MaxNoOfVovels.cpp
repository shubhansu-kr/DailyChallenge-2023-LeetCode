// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxVowels(string s, int k) {
        int maxCount = 0;
        for (int i = 0; i < k; ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                ++maxCount;
            }
        }
        int count = maxCount;
        for (int i = k; i < s.length(); ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                ++count;
            }
            if (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u') {
                --count;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};

int main () {
    
    return 0;
}