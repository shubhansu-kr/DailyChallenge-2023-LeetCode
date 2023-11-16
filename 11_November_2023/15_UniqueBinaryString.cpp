// https://leetcode.com/problems/find-unique-binary-string/?envType=daily-question&envId=2023-11-16

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";

        for (int i = 0; i < nums.size(); ++i) {
            char currentChar = nums[i][i];
            char oppositeChar = (currentChar == '0') ? '1' : '0';

            ans += oppositeChar;
        }

        return ans;
    }
};

int main () {
    
    return 0;
}