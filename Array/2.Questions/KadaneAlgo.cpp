// ye algo ka optimised solution dekhna hai
// isko max subarray wala question bhi bolte hain

{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxi = max(sum, maxi);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        if (maxi == 0)
        {
            maxi = nums[0];
            for (int i = 0; i < nums.size(); i++)
            {
                maxi = max(nums[i], maxi);
            }
        }
        return maxi;
    }
};