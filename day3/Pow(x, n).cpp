class Solution
{
public:
    double myPow(double x, long long n)
    {
        double ans;

        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        if (n > 0)
        {
            ans = myPow(x, n / 2);
            if (n % 2 == 1)
                return ans * ans * x;
            else
                return ans * ans;
        }
        else
        {
            return 1 / myPow(x, -n);
        }
    }
};

// class Solution {
// public:
//     double myPow(double x, int n) {
//         if (n==0)
//              return 1;
//         double t = myPow(x,n/2);
//         if (n%2)
//         {
//             return n<0 ? 1/x*t*t : x*t*t;
//         }
//         else
//         {
//             return t*t;
//         }
//     }
// };
