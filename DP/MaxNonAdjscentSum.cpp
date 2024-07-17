#include <bits/stdc++.h>
int maximumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;
    for (int i = 1; i < n; i++)
    {
        int takes = nums[i];
        if (i > 1)
            takes += prev2;
        int notTakes = 0 + prev;

        int curi = max(takes, notTakes);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}