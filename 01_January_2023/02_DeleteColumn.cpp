// https://leetcode.com/problems/delete-columns-to-make-sorted/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs[0].length();
        int minRowDeleted = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < strs.size() - 1; j++)
            {
                if (strs[j][i] > strs[j + 1][i])
                {
                    minRowDeleted++;
                    break;
                }
            }
        }
        return minRowDeleted;
    }
};

int main () {
    
    return 0;
}