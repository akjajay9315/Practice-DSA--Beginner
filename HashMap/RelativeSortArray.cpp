class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        int a = 0;
        // Step 1: Relative Ordering
        for (int i = 0; i < arr2.size(); i++)
        {
            for (int j = 0; j < arr1.size(); j++)
            {
                if (arr1[j] == arr2[i])
                {
                    swap(arr1[a], arr1[j]);
                    a++;
                }
            }
        }
        // Step 2: Sorting Remaining Elements
        sort(arr1.begin() + a, arr1.end());
        return arr1;
    }
};

// Hashmap sol -----------------read and study 
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        map<int, int> mp;
        vector<int> ans;
        int y = 0;
        for (int i = 0; i < arr1.size(); i++)
            mp[arr1[i]]++;
        while (y < arr2.size())
        {
            if (mp[arr2[y]])
            {
                ans.push_back(arr2[y]);
                mp[arr2[y]]--;
            }
            else
                y++;
        }
        for (auto it : mp)
        {
            int freq = it.second;
            for (int i = 0; i < freq; i++)
                ans.push_back(it.first);
        }
        return ans;
    }
};