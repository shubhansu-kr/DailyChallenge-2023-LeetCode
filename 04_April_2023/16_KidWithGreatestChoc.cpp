// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandy = candies[0];
        for (int i = 0; i < candies.size(); i++)
            if (maxCandy < candies[i]) maxCandy = candies[i];
        for (int i = 0; i < candies.size(); i++)
            ans.push_back(maxCandy <= candies[i] + extraCandies);
        return ans; 
    }
};

int main () {
    
    return 0;
}