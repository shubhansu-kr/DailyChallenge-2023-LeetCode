// https://leetcode.com/problems/boats-to-save-people/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numRescueBoats(vector<int> people, int limit)
    {
        int i, j;
        sort(people.rbegin(), people.rend());
        for (i = 0, j = people.size() - 1; i <= j; ++i)
            if (people[i] + people[j] <= limit)
                j--;
        return i;
    }
};

int main()
{

    return 0;
}