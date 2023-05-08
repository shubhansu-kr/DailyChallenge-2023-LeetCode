// https://leetcode.com/problems/matrix-diagonal-sum/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // Inputs: 
        int n = mat.size();

        // Solution: 
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += (mat[i][i] + (i == n-1-i ? 0 : mat[i][n-1-i]));
        }
        return sum;        
    }
};

int main () {
    
    return 0;
}