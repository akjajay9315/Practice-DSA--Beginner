class Solution
{

    int getpivot(vector<int> &nums)
    {
        int s = 0;
        int e = nums.size() - 1;

        int mid = s + (e - s) / 2;

        while (s < e)
        {

            if (nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int> &nums, int s, int e, int target)
    {

        int start = s;
        int end = e;

        int mid = (start + end) / 2;

        while (start <= end)
        {

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = (start + end) / 2;
        }
        return -1;
    }

public:
    int search(vector<int> &nums, int target)
    {

        int pivot = getpivot(nums);

        if (target >= nums[pivot] && target <= nums[nums.size() - 1])
        {
            // BSI on first line
            return binarySearch(nums, pivot, nums.size() - 1, target);
        }
        else
        {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};