// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/?envType=daily-question&envId=2023-12-02

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26);
        for(auto &it: chars){++freq[it-'a'];}

        int ans = 0;
        for(auto &it: words){
            bool flag = true;
            vector<int> temp = freq;
            for(auto &c: it){
                if (temp[c-'a']){
                    temp[c-'a']--;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if (flag) ans += it.length();
        }

        return ans;
    }
};

int main () {
    
    return 0;
}