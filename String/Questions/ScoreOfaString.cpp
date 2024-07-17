class Solution
{
public:
    int scoreOfString(string s)
    {
        int i = 1;
        int ans = 0;
        while (s[i] != '\0')
        {
            ans += abs(s[i] - s[i - 1]);
            i++;
        }
        return ans;
    }
};