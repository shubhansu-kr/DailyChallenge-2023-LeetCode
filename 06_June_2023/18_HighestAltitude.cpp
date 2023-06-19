// https://leetcode.com/problems/find-the-highest-altitude/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        int prevAlt = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            prevAlt += gain[i];
            alt.push_back(prevAlt);
        }
        int maxAltitude = 0;
        for (int i = 0; i < alt.size(); i++)
        {
            if (maxAltitude < alt[i])
            {
                maxAltitude = alt[i];
            }
        }
        return maxAltitude;
    }
};

int main () {
    
    return 0;
}