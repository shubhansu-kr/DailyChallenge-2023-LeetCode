// https://leetcode.com/problems/knight-probability-in-chessboard/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
private:
    unordered_map<int, unordered_map<int, unordered_map<int, double>>>dp;
public:
    double knightProbability(int n, int k, int row, int column) {
        if(dp.count(row) && dp[row].count(column) && dp[row][column].count(k)) return dp[row][column][k];
        if(row < 0 || row >= n || column < 0 || column >= n) return 0;
        if(k == 0) return 1;
        double total = knightProbability(n, k - 1, row - 1, column - 2) + knightProbability(n, k - 1, row - 2, column - 1) 
                     + knightProbability(n, k - 1, row - 1, column + 2) + knightProbability(n, k - 1, row - 2, column + 1) 
                     + knightProbability(n, k - 1, row + 1, column + 2) + knightProbability(n, k - 1, row + 2, column + 1) 
                     + knightProbability(n, k - 1, row + 1, column - 2) + knightProbability(n, k - 1, row + 2, column - 1);
        double res = total / 8;
        dp[row][column][k] = res;
        return res;
    }
};

int main () {
    
    return 0;
}