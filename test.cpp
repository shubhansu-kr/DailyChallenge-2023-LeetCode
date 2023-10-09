// 

#include <bits/stdc++.h>
using namespace std ;     

class Solution {
public:
    string reverseWords(string s) 
    {
           
        while(s.size() > 0 && s.back() == ' ') s.pop_back();
        reverse(begin(s), end(s));
        while(s.size() > 0 && s.back() == ' ') s.pop_back();
        int i, start, end;
        start = end = -1; i = 0;
        int n = s.length();

        for (i = 0; i <= n; i++)
        {
            if (s[i] == ' ' || i == n)
            {
                start =  end + 1;
                end = i - 1;
                while(start < end)
                {
                    swap(s[start], s[end]);
                    start++; end--;
                }
                end = i;
                
                if(i != n && s[i+1]==' ') 
                {
                    s.erase(s.begin() + i);
                    i--;
                }  
            }
        }
        return s;
    }
};

int main () {
    
    
    return 0;
}

