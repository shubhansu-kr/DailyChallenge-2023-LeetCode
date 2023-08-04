// https://leetcode.com/problems/word-break/

#include <bits/stdc++.h>
using namespace std;

class trie
{
public:
    unordered_map<char, trie *> m;
    bool isEnd; 
};              

class Solution
{
public:
    trie *root;
    int dp[301];
    Solution()
    {
        root = new trie(); 
    }
    trie *getNode()
    {
        trie *tmp = new trie();
        tmp->isEnd = false;
        return tmp;
    }
    void insert(string &s)
    {
        if (!root) root = getNode();
        trie *tmp = root;
        
        for (auto &i : s)
        {
            if (!tmp->m.count(i)) tmp->m[i] = getNode();
            tmp = tmp->m[i]; 
        }
        tmp->isEnd = true; 
    }
    bool search(string &s, int a, int b)
    {
        if (!root) return false;
        trie *tmp = root;

        for (int i = a; i <= b; i++)
        {
            if (!tmp->m.count(s[i])) return false;
            tmp = tmp->m[s[i]]; 
        }
        return tmp->isEnd; 
    }
    bool calc(string &s, int i)
    {
        if (i == s.length()) return true;
        bool f = false;
        if (dp[i] != -1) return dp[i];
        
        for (int j = i; j < s.length(); j++)
            f = f || search(s, i, j) && calc(s, j + 1);
        return dp[i] = f;
    }
    bool wordBreak(string s, vector<string> &wordDict)
    {
        for (auto &i : wordDict) insert(i);
        memset(dp, -1, sizeof(dp));
        return calc(s, 0);
    }
};

int main()
{

    return 0;
}