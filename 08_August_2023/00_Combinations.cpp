// https://leetcode.com/problems/combinations/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> sub;
        
        solve(ans, sub, n, k, 1);
          
        return ans;
    }

    void solve(vector<vector<int>> &ans, vector<int> &sub, int &n, int &k, int i) {
        if (sub.size() == k) {
            ans.emplace_back(sub);
            return;
        }
        if (i > n) return;

        // Take 
        sub.emplace_back(i);
        solve(ans, sub, n, k, i+1);
        sub.pop_back();
        solve(ans, sub, n, k, i+1);

        return;
    }
};

int main () {
    
    return 0;
}