// https://leetcode.com/problems/non-decreasing-subsequences/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    //
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans, nums, temp);
        return ans;
    }

    void solve(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, int i = 0) {
        if (i >= nums.size()) {
            if (temp.size() > 1) {
                ans.emplace_back(temp);
            }
            return;
        }

        // Take 
        if (temp.empty() || nums[i] >= temp.back()) {
            temp.emplace_back(nums[i]);
            solve(ans, nums, temp, i+1);
            temp.pop_back();
        }
        // Dont Take
        solve(ans, nums, temp, i+1);
    }
};

class Solution {
    // Wrong answer : Since the elements of nums are not distinct, the subsequences are repeated. 
    
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans, nums, temp);
        return ans;
    }

    void solve(vector<vector<int>> &ans, vector<int> &nums, vector<int> &temp, int i = 0) {
        if (i >= nums.size()) {
            if (temp.size() > 1) {
                ans.emplace_back(temp);
            }
            return;
        }

        // Take 
        if (temp.empty() || nums[i] >= temp.back()) {
            temp.emplace_back(nums[i]);
            solve(ans, nums, temp, i+1);
            temp.pop_back();
        }
        // Dont Take
        solve(ans, nums, temp, i+1);
    }
};

int main () {
    
    Solution Obj1;
    vector<int> nums = {4, 4, 7, 7, 3, 2 , 4, 5, 4};
    // vector<vector<int>> ans = Obj1.findSubsequences(nums);

    cout << nums.back();

    // for(auto it: ans)
    //     for (auto &jt: it) 
    //         cout << jt << " ";
    //     cout << endl;
    // cout << endl;
    return 0;
}