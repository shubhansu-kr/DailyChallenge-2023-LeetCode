// https://leetcode.com/problems/search-a-2d-matrix/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Choose row 
        int m = matrix.size(), n = matrix[0].size();

        int low = 0, high = m-1, row = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if (matrix[mid][0] <= target && matrix[mid][n-1] >= target) {
                row = mid;
                break;
            }
            else if (target < matrix[mid][0]) {high = mid-1;}
            else if (target > matrix[mid][n-1]) {low = mid+1;}
        }

        // Choose Col
        if (row != -1) {
            low = 0, high = n-1;

            while (low <= high) {
                int mid = low + (high-low)/2;

                if (matrix[row][mid] == target) return true;
                else if (matrix[row][mid] > target) high = mid-1;
                else low = mid+1;
            }
        }

        return false;
    }
};

int main () {
    
    return 0;
}