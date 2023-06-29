//

#include <bits/stdc++.h>
using namespace std;

long getNumberOfDroppedPackets(vector<vector<int>> requests, int maxPacket, int rate)
{
    long dropped = 0, current = 0;

    // Sort for time.
    sort(requests.begin(), requests.end(), [](vector<int> v1, vector<int> v2)
         { return v1[0] < v2[0]; });

    current = requests[0][1];

    if (current > maxPacket)
    {
        dropped += current - maxPacket;
        current = maxPacket;
    }

    for (int i = 1; i < requests.size(); ++i)
    {
        int t = requests[i][0] - requests[i - 1][0];

        // deliver package
        current = max(0, (int)(current - t * rate));

        current += requests[i][1];
        if (current > maxPacket)
        {
            dropped += current - maxPacket;
            current = maxPacket;
        }
    }

    return dropped;
}

int getMaxPoints(vector<int> markers)
{
    int i = 0, j = markers.size() - 1;

    vector<vector<vector<int>>> dp(markers.size() + 1, vector<vector<int>>(markers.size() + 1, vector<int>(2, -1)));
    return solve(dp, markers, i, j, 1);
}

int solve(vector<vector<vector<int>>> &dp, vector<int> &markers, int i, int j, int turn)
{
    if (i >= j)
        return 0;

    if (dp[i][j][turn] != -1)
        return dp[i][j][turn];
    int left = 0, right = 0;
    if (turn)
    {
        left = markers[i] + solve(dp, markers, i + 1, j, 0);
        right = markers[j] + solve(dp, markers, i, j - 1, 0);
    }
    else
    {
        left = solve(dp, markers, i + 1, j, 1);
        right = solve(dp, markers, i, j - 1, 1);
    }

    return dp[i][j][turn] = max(left, right);
}

int main()
{

    return 0;
}