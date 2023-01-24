// https://leetcode.com/problems/snakes-and-ladders/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // Runtime Error: Stack Overflow
public:
    pair<int, int> findCordinates(int &n, int &curr){
        if(curr > n*n || curr < 1) return pair<int, int>(-1, -1);

        // Convert to zero based index.
        curr--;

        int row = -1, col = -1;
        row = n-1-(curr/n);
        col = curr%n;

        // if row is odd invert col.
        if (row % 2) col = n-1-col;

        return pair<int, int>(row, col);
    }

    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> dp((n*n), -1);
        int ans = minMoves(board, dp, n);
        return ans >= 1e9 ? -1 : ans;
    }

    int minMoves(vector<vector<int>> &board, vector<int> &dp, int &n, int curr = 1){
        if (curr >= n*n){
            if (curr == n*n) return 0;
            else return 1e9;
        }

        if (dp[curr-1] != -1) return dp[curr-1];

        // 6 possible spaces
        int moves = 1e9;
        for (int i = 1; i < 7; ++i)
        {
            int newPos = curr + i;
            if (newPos <= n*n){
                pair<int, int> cord = findCordinates(n, newPos);
                int row = cord.first, col = cord.second;

                if (board[row][col] != -1) moves = min(moves, (1 + minMoves(board, dp, n, board[row][col])));
                else moves = min(moves, 1 + minMoves(board, dp, n, newPos));
            }
        }
        
        return dp[curr-1] = moves;
    }
};

int main () {
    
    return 0;
}