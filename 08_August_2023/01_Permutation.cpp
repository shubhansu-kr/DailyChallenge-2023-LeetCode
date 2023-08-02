// https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
   vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        swapp(nums, ans);
        return ans;
    }
    void swapp(vector<int> &nums, vector<vector<int>> &ans, int i = 0)
    {
        if (i >= nums.size())
        {
            ans.emplace_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); ++j)
        {
            swap(nums[i], nums[j]);
            swapp(nums, ans, i + 1);
            swap(nums[i], nums[j]);
        }
    }
};

int main () {
    
    return 0;
}