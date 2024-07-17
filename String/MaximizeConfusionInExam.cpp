// Read question discription
// samajhna hai

class Solution
{
public:
    int maxConsecutiveAnswers(string s, int k)
    {
        int i = 0;
        int j = 0;
        int countT = 0;
        int countF = 0;
        int MaxAns = 0;

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == 'T')
                countT++;
            if (s[i] == 'F')
                countF++;
            while (min(countT, countF) > k)
            {
                if (s[j] == 'T')
                    countT--;
                if (s[j] == 'F')
                    countF--;
                j++;
            }
            MaxAns = max(MaxAns, i - j + 1);
        }
        return MaxAns;
    }
};
// Best