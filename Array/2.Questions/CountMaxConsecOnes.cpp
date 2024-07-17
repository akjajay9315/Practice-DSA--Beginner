class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int count = 0;
        int count1 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count1++;
                count = max(count, count1);
            }
            else
            {
                count1 = 0;
            }
        }
        return count;
    }
};