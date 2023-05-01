// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    double average(vector<int>& salary) {
        int min = salary[0], max = salary[0];
        double sum = 0;
        for (int i = 0; i < salary.size(); i++)
        {
            sum += salary[i];
            if (min > salary[i])
            {
                min = salary[i];
            }
            if (max < salary[i])
            {
                max = salary[i];
            }
        }
        sum -= (max + min);
        return sum / (salary.size() - 2);
    }
};

int main () {
    
    return 0;
}