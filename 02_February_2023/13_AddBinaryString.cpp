// https://leetcode.com/problems/add-binary/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // WA : "110010" "100"
public:
    string addBinary(string a, string b) {
        string temp1, temp2, res;
        
        if (a.length() >= b.length()) {
            temp1 = a;
            temp2 = b;
        }
        else {
            temp2 = a;
            temp1 = b;
        }


        // Temp1 is greater or equal to temp2 in length.
        int i = temp1.length()-1, j = temp2.length()-1;
        int cIn = 0, p = 0, q = 0, sum, cOut;

        while(j >= 0) {
            p = temp1[i--]-'0', q = temp2[j--]-'0';

            sum = (p^q^cIn);
            cOut = ((p&q)|(p&cIn)|(q&cIn));

            cIn = cOut;
            res.insert(res.begin(), (sum+'0'));
        }

        q = 0;
        while(i >= 0) {
            p = temp1[i--]-'0';

            sum = (p^q^cIn);
            cOut = ((p&q)|(p&cIn)|(q&cIn));

            cIn = cOut;
            res.insert(res.begin(), (sum+'0'));
        }

        if (cIn) {
            res.insert(res.begin(), ('1'));
        }
        
        return res;
    }
};

int main () {
    
    return 0;
}