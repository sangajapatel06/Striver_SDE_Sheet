class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        // set<int> hashSet;               WHEN USING THIS THEN TLE
        unordered_set<int> hashSet;
        for (int num : nums)
        {
            hashSet.insert(num);
        }
        int longStreak = 0;
        for (int num : nums)
        {
            if (!hashSet.count(num - 1))
            {
                int currStreak = 1;
                int currNum = num;

                while (hashSet.count(currNum + 1))
                {
                    currNum += 1;
                    currStreak += 1;
                }
                longStreak = max(longStreak, currStreak);
            }
        }
        return longStreak;
    }
};