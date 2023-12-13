// https://leetcode.com/problems/special-positions-in-a-binary-matrix/?envType=daily-question&envId=2023-12-13

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> rowSum;
        vector<int> colSum;
        for (int i = 0; i < mat.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                sum += mat[i][j];
            }
            rowSum.push_back(sum);
        }
        for (int i = 0; i < mat[0].size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < mat.size(); j++)
            {
                sum += mat[j][i];
            }
            colSum.push_back(sum);
        }
        int count = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1 && rowSum[i]==1 && colSum[j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main () {
    
    return 0;
}