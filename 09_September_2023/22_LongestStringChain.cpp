// https://leetcode.com/problems/longest-string-chain/description/?envType=daily-question&envId=2023-09-23

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool compare (string s, string t) {
        if (s.size() - t.size() != 1) return false;
        int i = 0, j = 0, flag = 1;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) ++i, ++j;
            else {
                if(flag) ++i, flag = 0;
                else return false;
            }
        }
        return true;
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string s, string t){return s.length()<t.length();});
        int n = words.size();
        // dp[i] signifies the size of subsequece if ss ends at index i
        vector<int> dp(n, 1);
        int maxIndex = 0, maxVal = INT_MIN;
        for (int i = 0; i < n; ++i)
        {    
            for (int j = 0; j < i; ++j)
            {
                if (compare(words[i], words[j]) && dp[i] < dp[j]+1) {
                    dp[i] = dp[j]+1;
                    if (maxVal < dp[i]) {
                        maxVal = dp[i];
                        maxIndex = i;
                    }
                } 
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};

int main () {
    
    return 0;
}