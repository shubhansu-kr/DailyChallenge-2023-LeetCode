// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/?envType=daily-question&envId=2023-11-04

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int i=0;i<left.size();i++)  ans=max(ans,(abs(0-left[i])));  
        for(int i=0;i<right.size();i++) ans=max(ans,abs(n-right[i]));        
        return ans;        
    }
};

int main () {
    
    return 0;
}