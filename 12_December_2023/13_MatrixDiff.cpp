// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/?envType=daily-question&envId=2023-12-14

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> diff(m, vector<int> (n, 0));

        vector<pair<int, int>> rows(m), cols(n);
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if (grid[i][j]){
                    rows[i].second++;
                    cols[j].second++;
                }
                else {
                    rows[i].first++;
                    cols[j].first++;
                }
            }
        }

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                diff[i][j] = rows[i].second + cols[j].second - rows[i].first - cols[j].first;
            }
        }

        return diff;
    }
};

int main () {
    
    return 0;
}