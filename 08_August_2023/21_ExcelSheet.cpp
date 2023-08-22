// https://leetcode.com/problems/excel-sheet-column-title/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        int i = 0;
        while (columnNumber)
        {
            --columnNumber;
            char temp = 'A' + columnNumber % 26 ;
            res = temp + res ;
            columnNumber /= 26 ;
        }
        return res ;
    }
};

int main () {
    
    return 0;
}