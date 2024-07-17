// striver solutions

class Solution
{
private:
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, vector<bool> &used)
    {
        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!used[i])
            {
                ds.push_back(nums[i]);
                used[i] = true;
                recurPermute(ds, nums, ans, used);
                used[i] = false;
                ds.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> used(nums.size(), false); // Initialize used vector with false values
        recurPermute(ds, nums, ans, used);
        return ans;
    }
};
