// https://leetcode.com/problems/merge-strings-alternately/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i = 0, j = 0;
        int sw = 1;
        while (i != word1.size() || j != word2.size())
        {
            if (sw)
            {
                res.push_back(word1[i]);
                ++i;
                sw = 0;
                if (i == word1.size())
                {
                    // append rest of word2 and break
                    res.append(word2.substr(j));
                    break;
                }
            }
            else
            {
                res.push_back(word2[j]);
                ++j;
                sw = 1;
                if (j == word2.size())
                {
                    // Append the rest of word 1 and break
                    res.append(word1.substr(i));
                    break;
                }
            }
        }
        return res;
    }
};

int main () {
    
    return 0;
}