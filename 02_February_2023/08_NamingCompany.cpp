// https://leetcode.com/problems/naming-a-company/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
    // BruteForce: TLE : Need Optimisation. 
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> id(ideas.begin(), ideas.end());

        // Possible combination
        long long ans = 0;

        for (int i = 0; i < ideas.size(); ++i)
        {
            string a = ideas[i];
            for (int j = 0; j < ideas.size(); ++j)
            {
                // Can't match identical strings.
                if (i == j) continue;

                // Check ideas[i], ideas[j]; for valid combination. 
                string b = ideas[j];

                // Swap the first char of each string
                a[0] = ideas[j][0];
                b[0] = ideas[i][0];

                // Check availability in ideas.
                if (!id.count(a) && !id.count(b)) ++ans;
            }
        }
        return ans;

    }
};

int main () {
    
    return 0;
}