// Bottom Up Approach
class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

// TOP DOWN APPROACH
// int t[46]={0};
// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==1) {t[n]=1; return 1;}
//         if(n==2) {t[n]=2; return 2;}
//         else if(t[n]!=0) return t[n];
//         t[n] = climbStairs(n-1)+climbStairs(n-2);
//         return t[n];
//     }
// };

// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n <= 2) return n;
//         int prev = 2, prev2 = 1, res;
//         for (int i = 3; i <= n; i++) {
//             res = prev + prev2;
//             prev2 = prev;
//             prev = res;
//         }
//         return res;
//     }
// };