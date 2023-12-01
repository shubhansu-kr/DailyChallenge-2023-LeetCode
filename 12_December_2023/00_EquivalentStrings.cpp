// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/?envType=daily-question&envId=2023-12-01

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "", w2 = "";
        for(auto &it: word1) w1 += it;
        for(auto &it: word2) w2 += it;
        return w1 == w2;
    }
};

int main () {
    
    return 0;
}