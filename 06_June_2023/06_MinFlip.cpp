// https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFlips(int a, int b, int c)
    {
        int count = 0;
        for (int i = 0; i < 31; i++)
        {
            int mask = 1 << i;
            if ((c & mask) == 0)
            {
                if ((a & mask) > 0) count++;
                if ((b & mask) > 0) count++;
            }
            else
            {
                if ((a & mask) == 0 && (b & mask) == 0) count++;
            }
        }
        return count;
    }
};

int main()
{

    return 0;
}