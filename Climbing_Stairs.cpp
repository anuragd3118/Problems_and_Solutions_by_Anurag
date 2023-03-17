#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int solve(int dp[], int n)
    {
        if (dp[n] != -1)
        {
            return dp[n];
        }
        if (n == 1 || n == 2)
        {
            return n;
        }
        return dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
    }
    int climbStairs(int n)
    {
        int dp[n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }
        return solve(dp, n);
    }
};