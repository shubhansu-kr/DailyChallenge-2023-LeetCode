// https://leetcode.com/problems/minimum-time-to-complete-trips/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int numberOfTripsForGivenTime(vector<int> &a, long long int givenTime)
    {
        long long int totalTrips = 0;
        for (auto x : a)
        {
            long long int val = x;
            totalTrips += (givenTime / val);
        }
        return totalTrips;
    }
    long long minimumTime(vector<int> &time, int totalTrips)
    {
        long long int lowestTime = 1;
        long long int highestTime = 1e14;
        while (lowestTime < highestTime)
        {
            long long int mid = lowestTime + (highestTime - lowestTime) / 2;
            if (numberOfTripsForGivenTime(time, mid) >= totalTrips) highestTime = mid;
            else lowestTime = mid + 1;
        }
        return lowestTime;
    }
};

int main()
{

    return 0;
}