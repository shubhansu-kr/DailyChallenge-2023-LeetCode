// https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/?envType=daily-question&envId=2023-12-30

#include <bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> counts;
        for (auto a  : words) {
            for (char x : a) {
                counts[x]++;
            }
        }
        
        int n = words.size();
        for (auto a : counts) {
            if (a.second % n != 0) {
                return false;
            }
        }
        
        return true;
    }
};


int main () {
    
    return 0;
}