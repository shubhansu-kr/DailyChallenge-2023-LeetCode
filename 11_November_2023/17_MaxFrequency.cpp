// https://leetcode.com/problems/frequency-of-the-most-frequent-element/?envType=daily-question&envId=2023-11-18

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        map<int, int, greater<int>> mp;
        for(auto &it: nums) {
            mp[it]++;
        }
        vector<pair<int, int>> data;
        for(auto &it: mp){
            data.emplace_back(it);
        }

        // now we have a element->freq in descending order. 
        int ans = INT_MIN;

        for(int i = 0; i < data.size(); ++i) {
            int freq = data[i].second;
            int addOn = k;

            for(int j = i+1; j < data.size(); ++j) {
                int diff = data[i].first - data[j].first;
                if (addOn < diff) break;

                int d = min(data[j].second, addOn/diff);
                addOn -= (d * diff);

                freq += d;
            }

            ans = max(ans, freq);
        }

        return ans;
    }
};

int main () {
    
    return 0;
}