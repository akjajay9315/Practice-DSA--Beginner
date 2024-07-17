class Solution
{
public:
    string removeOuterParentheses(string S)
    {
        string res;
        int opened = 0;
        for (char c : S)
        {
            if (c == '(' && opened++ > 0)
                res += c;
            if (c == ')' && opened-- > 1)
                res += c;
        }
        return res;
    }
};



// sOLUTIONN 2 ------

    class Solution
    {
    public:
        string removeOuterParentheses(string s)
        {
            string ans;
            int cnt = 0;
            for (char chr : s)
                if (chr == '(')
                    if (!cnt)
                        cnt++;
                    else
                    {
                        ans += '(';
                        cnt++;
                    }
                else if (cnt > 1)
                {
                    ans += ')';
                    cnt--;
                }
                else
                    cnt--;
            return ans;
        }
    };



// SOLUTTION 3--------------------
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string removed = "";

        int n = s.size();

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                if (cnt > 0)
                {
                    removed += s[i];
                }
                cnt++;
            }
            else
            {
                cnt--;
                if (cnt > 0)
                {
                    removed += s[i];
                }
            }
        }
        return removed;
    }
};