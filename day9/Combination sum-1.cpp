class Solution
{
public:
    void Combinations(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &vec)
    {
        if (ind == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(vec);
            }
            return;
        }
        if (arr[ind] <= target)
        {
            vec.push_back(arr[ind]);
            Combinations(ind, target - arr[ind], arr, ans, vec);
            vec.pop_back();
        }
        Combinations(ind + 1, target, arr, ans, vec);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> vec;
        Combinations(0, target, candidates, ans, vec);
        return ans;
    }
};