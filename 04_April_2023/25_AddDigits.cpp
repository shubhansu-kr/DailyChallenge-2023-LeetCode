// https://leetcode.com/problems/add-digits/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int addDigits(int num) {
        int count = 0, temp;
        do
        {
            temp = num;
            num = 0, count = 0;
            while(temp){
                num += (temp%10);
                temp /= 10;
                ++count;
            }
        } while (count > 1);

        return num;
    }
};

int main () {
    
    return 0;
}