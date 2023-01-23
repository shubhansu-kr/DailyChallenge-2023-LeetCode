// https://leetcode.com/problems/find-the-town-judge/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n, 0), outDegree(n, 0);
        for(auto &it: trust){
            outDegree[it[0]-1]++;
            inDegree[it[1]-1]++;
        }
        for (int i = 0; i < n; ++i)
        {
            if (outDegree[i] == 0 && inDegree[i] == n-1) return i+1;
        }
        return -1;
    }
};

int main () {
    
    return 0;
}