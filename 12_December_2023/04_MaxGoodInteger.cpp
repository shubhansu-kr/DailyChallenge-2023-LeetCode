// https://leetcode.com/problems/largest-3-same-digit-number-in-string/?envType=daily-question&envId=2023-12-04

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi = -1;
        for(int i = 2; i < num.length(); ++i) {
            if (num[i] == num[i-1] && num[i] == num[i-2]) maxi = max(maxi, (int)(num[i]-'0'));
        }
        if (maxi == -1) return "";
        string ans = "";
        for(int i = 0; i < 3; ++i) ans += ('0'+maxi);
        return ans;
    }
};

int main () {
    
    return 0;
}