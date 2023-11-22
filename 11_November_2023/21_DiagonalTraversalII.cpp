// https://leetcode.com/problems/diagonal-traverse-ii/description/?envType=daily-question&envId=2023-11-22

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // Store the data and print it: Sum (i+j) on each diagonal is same.
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n = nums.size();

        vector<stack<int>> v(2*n - 1);
        for(int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums[i].size(); ++j) {
                v[i+j].push(nums[i][j]);
            }
        }

        vector<int> ans;
        for(auto &it: v) {
            while(it.size()){
                ans.emplace_back(it.top());
                it.pop();
            }
        }

        return ans;
    }
};

int main () {
    
    return 0;
}