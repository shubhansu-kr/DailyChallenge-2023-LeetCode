// https://leetcode.com/problems/number-of-flowers-in-full-bloom/?envType=daily-question&envId=2023-10-11

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int> res;
        for (auto it : persons)
        {
            int count = 0;
            for (auto x : flowers)
            {
                if (it >= x[0] && it <= x[1])
                {
                    ++count;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};

int main () {
    
    return 0;
}