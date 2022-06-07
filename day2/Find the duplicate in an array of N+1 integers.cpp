// Using in-builtsort function
// Time complexity O(NlogN+N)
// Space complexity O(1)

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                return nums[i];
        }
        return -1;
    }
};
// Using frequency array
// Time complexity O(N)
// Space complexity O(N)

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (v[nums[i]] != 0)
            {
                return nums[i];
            }
            else
            {
                v[nums[i]]++;
            }
        }
        return -1;
    }
};
// Slow and fast pointer approach
// Time complexity O(N)
// space complexity O(1)

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0], fast = nums[0];
        do
        {
            fast = nums[nums[fast]];
            slow = nums[slow];
        } while (slow != fast);
        fast = nums[0];
        while (slow != fast)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};