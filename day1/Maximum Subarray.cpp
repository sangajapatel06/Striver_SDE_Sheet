class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int msum = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            msum = max(msum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return msum;
    }
};
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         vector<int> dp(nums);
//         for(int i = 1; i < size(nums); i++)
//             dp[i] = max(nums[i], nums[i] + dp[i-1]);
//         return *max_element(begin(dp), end(dp));
//     }
// };