// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/?envType=daily-question&envId=2023-09-18

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:

    bool myComp(pair<int, int> &p1, pair<int, int> &p2) {
        if (p1.second == p2.second){
            return p1.first < p2.first;
        }
        return p1.second < p2.second;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();

        vector<pair<int, int>> strength(n, pair<int, int>({m, m}));

        for (int i = 0; i < n; ++i)
        {
            strength[i].first = i;
            for (int j = 0; j < m; ++j)
            {
                if (!mat[i][j]) {
                    strength[i].second = j;
                    break;
                }
            }
        }

        sort(strength.begin(), strength.end(), myComp);

        vector<int> ans;
        for (int i = 0; i < k; ++i)
        {
            ans.emplace_back(strength[i].first);
        }
        
        return ans;        
    }
};

int main () {
    
    vector<vector<int>> mat = {
        {1, 2},
        {1, 2},
        {1, 3}
    };

    Solution obj;
    obj.kWeakestRows(mat, 3);

    return 0;
}