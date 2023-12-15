// https://leetcode.com/problems/destination-city/?envType=daily-question&envId=2023-12-15

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> cities;

        // Collect outgoing cities
        for (const auto& path : paths) {
            cities.insert(path[0]);
        }

        // Find destination city with no outgoing path
        for (const auto& path : paths) {
            const std::string& dest = path[1];
            if (cities.find(dest) == cities.end()) {
                return dest;
            }
        }

        return "";
    }
};

int main () {
    
    return 0;
}