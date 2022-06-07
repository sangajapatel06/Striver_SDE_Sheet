// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> r(numRows);

//         for (int i = 0; i < numRows; i++) {
//             r[i].resize(i + 1);
//             r[i][0] = r[i][i] = 1;

//             for (int j = 1; j < i; j++)
//                 r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
//         }

//         return r;
//     }
// };

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        vector<vector<int>> ans(n); // initialize n rows
        for (int i = 0; i < n; i++)
        {
            ans[i] = vector<int>(i + 1, 1); // ith row(0-indexed) has i+1 elements
            for (int j = 1; j < i; j++)     // 1st and last elements will be 1, rest will be sum of two elements from above row
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        return ans;
    }
};

// class Solution {
// public:
// vector<vector<int>> generate(int n) {
// vector<vector <int>> dp(n, vector(1,1));

//      for(int i=1; i<n; i++){
//          for(int j=1; j<i; j++)
//              dp[i].push_back(dp[i-1][j]+dp[i-1][j-1]);
//          dp[i].push_back(1);
//      }
//      return dp;
//  }
// };

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {

//         vector < vector < int >> vec;
//         vector < int > temp;

//         temp.push_back(1);
//         vec.push_back(temp);

//         for(int i=1;i<numRows;i++)
//         {
//             temp.clear();
//             for(int j=0;j<=i;j++)
//             {
//                 if(j==i || j==0)
//                 {
//                     temp.push_back(1);
//                 }
//                 else
//                 {
//                      temp.push_back(vec[i - 1][j - 1] + vec[i - 1][j]);
//                 }
//             }
//             vec.push_back(temp);
//         }

//         return vec;

//     }
// };