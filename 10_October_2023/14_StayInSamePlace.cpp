// https://leetcode.com/problems/number-of-ways-to-stay-in-the-same-place-after-some-steps/?envType=daily-question&envId=2023-10-15

#include <bits/stdc++.h>
using namespace std ;

const int MOD = 1e9 + 7;

const int maxPositions = 250 + 3;
const int maxSteps = 500 + 3;

class Solution {
public:
    int dp[maxSteps][maxPositions];

    int calculateWays(int currentPosition, int remainingSteps, int arrLen) {
        if (remainingSteps == 0)
            return dp[remainingSteps][currentPosition] = (currentPosition == 0) ? 1 : 0;

        if (dp[remainingSteps][currentPosition] != -1)
            return dp[remainingSteps][currentPosition];

        int ways = 0;
        for (int dir = -1; dir <= 1; dir++) {
            int nextPosition = currentPosition + dir;

            if (nextPosition >= remainingSteps)
                continue;

            if (nextPosition >= 0 && nextPosition < arrLen) {
                ways += calculateWays(nextPosition, remainingSteps - 1, arrLen);
                ways %= MOD;
            }
        }

        return dp[remainingSteps][currentPosition] = ways;
    }

    int numWays(int steps, int arrLen) {
        memset(dp, -1, sizeof(dp));
        return calculateWays(0, steps, arrLen);
    }
};

int main () {
    
    return 0;
}