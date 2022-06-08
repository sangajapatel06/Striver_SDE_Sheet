// https://leetcode.com/problems/majority-element-ii/discuss/835696/2-methods1-hashmap2-without-hashmapc%2B%2Beasy-understanding

// 1. TC:O(n) SC:O(n)

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int k = nums.size() / 3;
        vector<int> vec;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++;
        for (auto i : map)
            if (i.second > k)
                vec.push_back(i.first);
        return vec;
    }
};

// 2. TC:O(n) SC:O(1)
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int count1=0,count2=0,num1=-1,num2=-1;
//         for(int i=0;i<nums.size();i++){
//             //If the current element is equal to one of the potential candidate, the count for that candidate is increased while leaving the count of the other candidate as it is.
//             if(nums[i]==num1) count1++;
//             else if(nums[i]==num2) count2++;
//             //If the counter reaches zero, the candidate associated with that counter will be replaced with the next element if the next element is not equal to the other candidate as well.
//             else if(count1==0) num1=nums[i],count1++;
//             else if(count2==0) num2=nums[i],count2++;
//             //Both counters are decremented only when the current element is different from both candidates.
//             else count1--,count2--;
//         }
//         count1=0,count2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==num1) count1++;
//             else if(nums[i]==num2) count2++;
//         }
//         vector<int> ans;
//         if(count1>(nums.size()/3)) ans.push_back(num1);
//         if(count2>(nums.size()/3)) ans.push_back(num2);
//         return ans;
//     }
// };
