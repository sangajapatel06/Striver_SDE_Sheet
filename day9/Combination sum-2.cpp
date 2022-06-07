class Solution
{
public:
    void Combinations(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &vec)
    {

        if (target == 0)
        {
            ans.push_back(vec);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            vec.push_back(arr[i]);
            Combinations(i + 1, target - arr[i], arr, ans, vec);
            vec.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> vec;
        sort(candidates.begin(), candidates.end());
        Combinations(0, target, candidates, ans, vec);
        return ans;
    }
};
