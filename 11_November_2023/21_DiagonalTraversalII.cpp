// https://leetcode.com/problems/diagonal-traverse-ii/description/?envType=daily-question&envId=2023-11-22

#include <bits/stdc++.h>
using namespace std ;

class Solution1 {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n = nums.size();
        queue<pair<int, int>> q;
        vector<int> ans;

        q.push( {0, 0} );
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            ans.push_back(nums[i][j]);
            if(!j && i + 1 < n) q.push( {i + 1, 0} );
            if(j + 1 < nums[i].size()) q.push( {i, j + 1} );
        }

        return ans;
    }
};

class Solution1 {
    // Traverse without storing 
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n = nums.size();

        vector<int> ans;

        int len = 1;
        bool inc = true;

        int i = 0, j = 0;


        while(len > 0) {
            if (len == n) inc = false;


            int row = i, col = j;

            int x = len;
            while(x--) {
                if (row >= n || col >= nums[row].size()) {
                    row--, col++;
                    continue;
                }
                ans.emplace_back(nums[row][col]);
                row--, col++;
            }

            inc ? ++i : ++j;
            inc ? len++ : len--;
        }

        return ans;
    }
};


class Solution {
    // Store the data and print it: Sum (i+j) on each diagonal is same.
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n = nums.size();

        vector<stack<int>> nums(2*n - 1);
        for(int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums[i].size(); ++j) {
                nums[i+j].push(nums[i][j]);
            }
        }

        vector<int> ans;
        for(auto &it: nums) {
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