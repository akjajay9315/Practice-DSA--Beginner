class Solution
{
public:
    bool findSuccessors(vector<int> &hand, int groupSize, int i, int n)
    {
        int next = hand[i] + 1;
        hand[i] = -1; // Mark as used
        int count = 1;
        i += 1;
        while (i < n && count < groupSize)
        {
            if (hand[i] == next)
            {
                next = hand[i] + 1;
                hand[i] = -1;
                count++;
            }
            i++;
        }
        return count == groupSize;
    }

    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        int n = hand.size();
        if (n % groupSize != 0)
            return false;
        std::sort(hand.begin(), hand.end());
        for (int i = 0; i < n; i++)
        {
            if (hand[i] >= 0)
            {
                if (!findSuccessors(hand, groupSize, i, n))
                    return false;
            }
        }
        return true;
    }
};

// another sol using map----------------------------------------------------

class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        map<int, int> countMap;
        for (int card : hand)
        {
            countMap[card]++;
        }

        sort(hand.begin(), hand.end());

        for (int i = 0; i < hand.size(); i++)
        {
            if (countMap[hand[i]] == 0)
            {
                continue;
            }

            for (int j = 0; j < groupSize; j++)
            {
                int currCard = hand[i] + j;

                if (countMap[currCard] == 0)
                {
                    return false;
                }

                countMap[currCard]--;
            }
        }

        return true;
    }
};
