// https://leetcode.com/problems/pascals-triangle-ii/?envType=daily-question&envId=2023-10-16

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascalTriangle(2);

        pascalTriangle[0].push_back(1);

        for (int currentRow = 1; currentRow <= rowIndex; currentRow++) {
            pascalTriangle[1].push_back(1);

            vector<int>& currentRowList = pascalTriangle[1];
            vector<int>& previousRowList = pascalTriangle[0];

            for (int j = 1; j < previousRowList.size(); j++) {
                int sum = previousRowList[j] + previousRowList[j - 1];
                currentRowList.push_back(sum);
            }

            currentRowList.push_back(1);

            pascalTriangle[0] = pascalTriangle[1] ;
            pascalTriangle[1].clear() ;
        }

        return pascalTriangle[0];
    }
};

int main () {
    
    return 0;
}