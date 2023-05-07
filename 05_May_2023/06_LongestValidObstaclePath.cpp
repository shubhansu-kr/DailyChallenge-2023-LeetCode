// https://leetcode.com/problems/find-the-longest-valid-obstacle-course-at-each-position/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> v(obstacles.size(),(int)1e9), ans;
        for(int x: obstacles){
            auto ub = upper_bound(begin(v), end(v), x);
            ans.emplace_back(ub - v.begin() + 1);
            *ub = x;
        }
        return ans;
    }
};

int main () {
    
    return 0;
}