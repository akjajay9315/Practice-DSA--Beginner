class Solution
{
public:
    int reverse(int x)
    {
        // To check for overflow
        // To check for overflow

        int sum = 0;
        while (x != 0)
        {
            int rem = x % 10;

            // Check for overflow before updating sum
            if ((sum > INT_MAX / 10) || (sum < INT_MIN / 10))
            {
                return 0;
            }

            sum = sum * 10 + rem;
            x = x / 10;
        }

        return sum;
    }
};