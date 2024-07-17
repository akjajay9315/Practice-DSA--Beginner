class Solution
{
private:
    int sumofD(vector<int> &arr, int div)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + ceil((double)(arr[i]) / (double)(div));
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        if (nums.size() > threshold)
        {
            return -1;
        }
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (sumofD(nums, mid) <= threshold)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return s;
    }
};