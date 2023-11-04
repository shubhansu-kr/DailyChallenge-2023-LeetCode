// https://leetcode.com/problems/build-an-array-with-stack-operations/?envType=daily-question&envId=2023-11-03

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (k == target.size()) break;

            if (i == target[k]) {
                ans.emplace_back("Push");
                k++;
            }
            else {
                ans.emplace_back("Push");
                ans.emplace_back("Pop");
            }
        }
        return ans;
    }
};

int main () {
    
    return 0;
}