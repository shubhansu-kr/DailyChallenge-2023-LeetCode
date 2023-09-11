// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/?envType=daily-question&envId=2023-09-11

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < groupSizes.size(); ++i)
        {
            mp[groupSizes[i]].emplace_back(i);
        }
        for(auto &it: mp){
            vector<int> sub;
            for(auto &x: it.second){
                sub.emplace_back(x);
                if (sub.size() == it.first){
                    ans.emplace_back(sub);
                    sub.clear();
                }
            }
        }
        return ans;
    }
};

int main () {
    
    return 0;
}