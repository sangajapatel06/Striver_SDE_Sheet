https : // leetcode.com/problems/majority-element/discuss/1787619/C%2B%2B-MULTIPLE-APPROACHES-%3A-Hashmaps-Sorting-VotingAlgo

        class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int l = nums.size();
        unordered_map<int, int> um;

        for (int i : nums)
        {
            if (++um[i] > l / 2)
                return i;
        }
        return 0;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& arr) {
//         int n = arr.size(); // extracting the size of the array

//         unordered_map<int,int> mp; // unordered map to store frequency

//         for(int i = 0; i < n; i++) // travrsing from the array to store frequency
//         {
//             mp[arr[i]]++;
//         }

//         int ans; // ans variable to store frequency

//         for(auto x: mp) // traverse from the map
//         {
//             // if frequency of any element is greater than n / 2 times
//             if(x.second > n / 2)
//             {
//                 ans = x.first; // store it in answer
//                 break; // break the loop
//             }
//         }

//         return ans; // return answer
//     }
// };

// Moore Voting Algorithm

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int counter = 0, majority;
        for (int num : nums)
        {
            if (!counter)
            {
                majority = num;
            }
            counter += num == majority ? 1 : -1;
        }
        return majority;
    }
};
