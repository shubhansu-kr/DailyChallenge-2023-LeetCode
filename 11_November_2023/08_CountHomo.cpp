// https://leetcode.com/problems/count-number-of-homogenous-substrings/?envType=daily-question&envId=2023-11-09

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int countHomogenous(string s) {
        int left = 0;
        long long res = 0;
        
        for (int right = 0; right < s.length(); right++) {
            if (s[left] == s[right]) {
                res += right - left + 1;
            } else {
                res += 1;
                left = right;
            }
        }

        return (int) (res % (1000000007));        
    }
};

int main () {
    
    return 0;
}