// https://leetcode.com/problems/verifying-an-alien-dictionary/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAlienSorted(vector<string> words, string order)
    {
        int mapping[26];
        for (int i = 0; i < 26; i++) mapping[order[i] - 'a'] = i;
        for (string &w : words) for (char &c : w) c = mapping[c - 'a'];
        return is_sorted(words.begin(), words.end());
    }
};

int main()
{

    return 0;
}