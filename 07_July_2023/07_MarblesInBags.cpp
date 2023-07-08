// https://leetcode.com/problems/put-marbles-in-bags/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long res = 0, n  = weights.size() - 1;
        for (int i = 0; i < n; ++i) weights[i] += weights[i + 1];
        weights.pop_back();
        nth_element(weights.begin(), weights.begin() + k - 1, weights.end());
        for (int i = 0; i < k - 1; ++i) res -= weights[i];
        nth_element(weights.begin(), weights.begin() + n - k + 1, weights.end());
        for (int i = 0; i < k - 1; ++i) res += weights[n - 1 - i];
        return res;
    }
};

int main () {
    
    return 0;
}