class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int l = nums.size();
        int ans = nums[0], maxi = nums[0], mini = nums[0];

        for (int i = 1; i < l; i++)
        {
            if (nums[i] < 0)
                swap(maxi, mini);
            maxi = max(nums[i], nums[i] * maxi);
            mini = min(nums[i], nums[i] * mini);
            ans = max(ans, maxi);
        }
        return ans;
    }
};