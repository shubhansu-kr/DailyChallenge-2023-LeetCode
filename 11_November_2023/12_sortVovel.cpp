// https://leetcode.com/problems/sort-vowels-in-a-string/?envType=daily-question&envId=2023-11-13

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string sortVowels(string s) {
        int sizeOfString = s.size();
        vector<char> vowels;
        vector<int> vowelPositions;
        for(int i = 0; i < sizeOfString; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U') {for vowel
                vowels.push_back(s[i]);
                vowelPositions.push_back(i); 
            }
        }
        sort(vowels.begin(), vowels.end());
        string resultString = s;
        for(int i = 0; i < vowelPositions.size(); i++) {
            resultString[vowelPositions[i]] = vowels[i];
        }
        return resultString;
    }
};

int main () {
    
    return 0;
}