// https://leetcode.com/problems/eliminate-maximum-number-of-monsters/?envType=daily-question&envId=2023-11-07

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();

        vector<float> tim(n);
        for(int i =0; i < n; ++i) {
            tim[i] = (float)dist[i]/ (float)speed[i];
        }

        sort(tim.begin(), tim.end());
        int t = 0, charge = 1;
        for(int i = 0; i < n; ++i){
            if (t-charge >= tim[i]) break;

            if (charge) charge = 0;
            ++t;
        }

        return t;

        int t = 0, buff = 1;
        while(t < n) {
            int min = INT_MAX;
            int minIndex = -1;

            bool flag = false;
            for(int i = 0; i < n; ++i) {
                if (t >= tim[i] + buff) {
                    flag = true;
                    break;
                }
            }

            if (flag) break;
            buff = 0;
            ++t;
        }

        return t;
    }
};

int main () {
    
    return 0;
}