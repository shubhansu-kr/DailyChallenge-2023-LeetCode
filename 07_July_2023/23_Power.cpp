// https://leetcode.com/problems/powx-n/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    double myPow(double x, int n) 
    {
        if (n < 0) { x = 1 / x; n = abs(n); }
        double ans = 1;
        while(n > 0)
        {
            if (n % 2 == 0) 
            {
                x = x * x;
                n = n / 2;
            }
            else 
            {
                ans = (ans * x);
                n--;
            }
        }
        return ans;
    }
};

int main () {
    
    return 0;
}