// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/?envType=daily-question&envId=2023-10-30

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        pair<int, int> p[arr.size()];
        for (int i = 0; i < arr.size(); i++)
        {
            p[i].second = arr[i];
            p[i].first = 0;
            while (arr[i] != 0)
            {
                if (arr[i] % 2 != 0)
                {
                    p[i].first++;
                }
                arr[i] /= 2;
            }
        }
        sort(p, p + arr.size());
        vector<int> answer;
        for (int i = 0; i < arr.size(); i++)
        {
            answer.push_back(p[i].second);
        }
        return answer;
    }
};

int main () {
    
    return 0;
}