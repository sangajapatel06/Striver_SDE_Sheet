class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, 1));
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         int t[m][n];

//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(i==0||j==0)
//                     t[i][j]=1;
//                 else
//                     t[i][j]=t[i-1][j]+t[i][j-1];
//             }
//         }
//         return t[m-1][n-1];

//     }
// };