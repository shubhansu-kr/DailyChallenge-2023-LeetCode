// https://leetcode.com/problems/largest-odd-number-in-string/?envType=daily-question&envId=2023-12-07

#include <bits/stdc++.h>
using namespace std ;


class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(); // Get the size of the input string


        if (num[n - 1] % 2 != 0)  // Check if the last digit of the input number is odd
            return num;           // If it is, the input number is already the largest odd number

        for (int i = n - 1; i >= 0; i--) {
            if (num[i] % 2 != 0) {
                return num.substr(0, i + 1);  // If an odd digit is found, return the substring up to that point
            }
        }

        return ""; // If no odd digits are found, return an empty string
    }
};


int main () {
    
    return 0;
}