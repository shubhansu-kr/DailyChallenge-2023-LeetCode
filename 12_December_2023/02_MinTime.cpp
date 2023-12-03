// https://leetcode.com/problems/minimum-time-visiting-all-points/?envType=daily-question&envId=2023-12-03

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int toTime(std::vector<int>& from, std::vector<int>& to) {
        int xDiff = std::abs(from[0] - to[0]);
        int yDiff = std::abs(from[1] - to[1]);
        
        return std::max(xDiff, yDiff);
    }

    int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
        int time = 0;

        for (int i = 1; i < points.size(); i++) {
            time += toTime(points[i - 1], points[i]);
        }

        return time;
    }
};

int main () {
    
    return 0;
}