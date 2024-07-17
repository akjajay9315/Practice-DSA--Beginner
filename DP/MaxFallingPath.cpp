// Recursion solution

int f(int i, int j, vector<vector<int>> &matrix)
{
    if (j < 0 || j >= matrix[0].size())
        return -1e8;
    if (i == 0)
        return matrix[0][j];
    int u matrix[i][j] + f(i - 1, j, matrix);
    int ld = matrix[i][j] + f(i - 1, j - l, matrix);
    int rd = matrix[i][j] + f(i - 1, j + 1, matrix);
    return max(u, max(ld, rd));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n matrix.size();
    int m = matrix[0].size();
    int maxi - 1e8;
    for (int j = 0; j < m; j++)
    {
        maxi = max(maxi, f(n - 1, j, matrix));
    }
    return maxi;
}

int minFallingPathSum(vector<vector<int>> &matrix)
{

    int n = matrix.size();

    int m = matrix[0].size();

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int j = 0; j < m; j++)
    {
        dp[0][j] = matrix[0][j];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ld = 1e9, rd = 1e9;

            int up = matrix[i][j] + dp[i - 1][j];

            if (j - 1 >= 0)
                ld = matrix[i][j] + dp[i - 1][j - 1];
            if (j + 1 < m)
                rd = matrix[i][j] + dp[i - 1][j + 1];

            dp[i][j] = min(up, min(ld, rd));
        }
    }

    int mini = dp[n - 1][0];

    for (int j = 1; j < m; j++)
    {

        mini = min(mini, dp[n - 1][j]);
    }
    return mini;
}

// space optimization

int minFallingPathSum(vector<vector<int>> &matrix)
{

    int n = matrix.size();

    int m = matrix[0].size();

    vector<int> cur(m, 0);
    vector<int> prev(m, 0);

    for (int j = 0; j < m; j++)
    {
        prev[j] = matrix[0][j];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ld = 1e9, rd = 1e9;

            int up = matrix[i][j] + prev[j];

            if (j - 1 >= 0)
                ld = matrix[i][j] + prev[j - 1];
            if (j + 1 < m)
                rd = matrix[i][j] + prev[j + 1];

            cur[j] = min(up, min(ld, rd));
        }
        prev = cur;
    }

    int mini = prev[0];

    for (int j = 1; j < m; j++)
    {

        mini = min(mini, prev[j]);
    }
    return mini;
}