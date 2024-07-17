#include <bits/stdc++.h>
int jump(int i, vector<int> &heights, vector<int> &dp)
{
    if (i == 0)
    {
        return 0;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int left = jump(i - 1, heights, dp) + abs(heights[i] - heights[i - 1]);
    int right = INT_MAX;
    if (i > 1)
    {
        right = jump(i - 2, heights, dp) + abs(heights[i] - heights[i - 2]);
    }
    return dp[i] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, -1);
    return jump(n - 1, heights, dp);
}

// Space Optimised
#include <bits/stdc++.h>
int frogJump(int n, vector<int> &heights)
{

    int prev2 = 0;
    int prev = 0;
    int cur;
    int j1;
    int j2;
    for (int i = 1; i < n; i++)
    {
        int j1 = prev + abs(heights[i] - heights[i - 1]);
        int j2 = INT_MAX;
        if (i > 1)
        {
            j2 = prev2 + abs(heights[i] - heights[i - 2]);
        }
        cur = min(j1, j2);
        prev2 = prev;
        prev = cur;
    }
    return prev;
}
