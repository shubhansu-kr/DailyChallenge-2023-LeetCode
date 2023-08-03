// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> keyPad = {
            {},
            {},
            {'a', 'b', 'c'}, 
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}
        };

        vector<string> ans;
        string sub = "";
        
        solve(keyPad, ans, sub, digits, 0);

        return ans;
    }

    void solve(vector<vector<char>> &keyPad, vector<string> &ans, string &sub, string &digits, int i) {
        if (i >= digits.size()) {
            if(sub.size()) ans.emplace_back(sub);
            return;
        }

        for(auto it: keyPad[digits[i]-'0']){
            sub += it;
            solve(keyPad, ans, sub, digits, i+1);
            sub.pop_back();
        }
    }


};

int main () {
    
    return 0;
}