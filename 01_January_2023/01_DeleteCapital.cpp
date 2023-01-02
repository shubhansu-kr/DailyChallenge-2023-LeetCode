// https://leetcode.com/problems/detect-capital/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) return true;
        bool firstCapital = (word[0] >= 'A' && word[0] <= 'Z'); 
        bool allCapital = true, allLower = true;
        for (int i = 1; i < word.size(); ++i)
        {
            if (word[i] <= 'z' && word[i] >= 'a') {
                allCapital = false;
            }
            else {
                allLower = false;
            }            
        }
        bool mix = (allCapital ^ allLower);
        return firstCapital ? mix : mix && allLower; 
    }
};

int main () {
    
    return 0;
}