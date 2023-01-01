// https://leetcode.com/problems/word-pattern/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string p, string s) {
        int n=p.size();
        stringstream s1(s);
        string word;
        int i=0;
        unordered_map<char,string> m;
        unordered_map<string,char> m1;
    
        while(s1>>word){
            if(i>=n) return false;
            if(m.find(p[i])==m.end()){
                m[p[i]]=word;
            }
            else{
                if(m[p[i]]!=word) return false;
            }
            if(m1.find(word)==m1.end()){
                m1[word]=p[i];
            }
            else{
                if(m1[word]!=p[i]) return false;
            }
            i++;
        }
        if(i==n) return true;
        else return false;
    }
};

int main()
{

    return 0;
}