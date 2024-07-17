// Recursive way
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

// Memoizartion
class Solution
{
public:
    int findWays(int n, vector<int> &dp)
    {
        if (n <= 1)
            return 1;
        if (dp[n] != -1)
            return dp[n]; // already solved subproblems
        return dp[n] = findWays(n - 1, dp) + findWays(n - 2, dp); // store the result of subproblem in dp array
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1); // fill all values with -1
        return findWays(n, dp);
    }
};