class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = prices.size();
        int maxp = 0;
        int buy = prices[0];

        for (int i = 0; i < l; i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else if (prices[i] - buy > maxp)
            {
                maxp = prices[i] - buy;
            }
        }
        return maxp;
    }
};
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int l = prices.size();
//         int maxp=0;
//         int buy=prices[0];

//         for(int i=0;i<l;i++)
//         {
//             if(prices[i]<buy)
//             {
//                 buy=prices[i];
//             }
//             else
//             {
//                 maxp=max(maxp,prices[i]-buy);
//             }
//         }
//         return maxp;
//     }
// };
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int l = prices.size();
//         int maxp=0;
//         int buy=prices[0];

//         for(int i=0;i<l;i++)
//         {
//             if(prices[i]<buy)
//             {
//                 buy=prices[i];
//             }
//             else if(prices[i]-buy > maxp)
//             {
//                 maxp=prices[i]-buy;
//             }
//         }
//         return maxp;
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int l = prices.size();
//         int maxp=0;
//         int buy=INT_MAX;

//         for(int i=0;i<l;i++)
//         {
//             buy=min(buy,prices[i]);
//             maxp=max(maxp,prices[i]-buy);
//         }
//         return maxp;
//     }
// };