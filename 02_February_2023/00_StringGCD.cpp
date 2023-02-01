// https://leetcode.com/problems/greatest-common-divisor-of-strings/    

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        // Clearly, the length of the gcd string is equal to gcd (str1 len, str2 len)
        int l = gcd(str1.length(), str2.length());

        string ref = str1.substr(0, l), temp;

        for (int i = 0; i < str1.size(); i+=l)
        {
            temp = str1.substr(i, l);
            if (ref != temp) return "";
        }
        for (int i = 0; i < str2.length(); i+=l)
        {
            temp = str2.substr(i, l);
            if (ref != temp) return "";
        }
        return ref;
    }
};

int main () {
    string str1 = "ABCABCABC", str2 = "ABC";

    Solution Obj1; 
    cout << Obj1.gcdOfStrings(str1, str2);

    return 0;
}