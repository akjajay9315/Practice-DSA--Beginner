// Using STL-------------------------------------

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        next_permutation(nums.begin(), nums.end());
        return;
    }
};

// Optimal Solution-------- tc - O(3n)  or O(1) in Best case ------samajhna hai
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int index = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        for (int i = n - 1; i > index; i--)
        {
            if (nums[i] > nums[index])
            {
                swap(nums[i], nums[index]);
                break;
            }
        }
        
        reverse(nums.begin() + index + 1, nums.end());
        return;
    }
};