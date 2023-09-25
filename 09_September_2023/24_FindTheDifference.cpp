// https://leetcode.com/problems/find-the-difference/description/?envType=daily-question&envId=2023-09-25

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        for (int i = 0; i < s.size(); i++)
            t[i + 1] += t[i] - s[i];
        return t[t.size() - 1];
    }
};

int main()
{

    return 0;
}