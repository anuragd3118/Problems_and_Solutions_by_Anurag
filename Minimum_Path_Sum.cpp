#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int solve(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if (i == 0 && j == 0)
        {
            return grid[i][j];
        }
        if (i < 0 || j < 0)
        {
            return int(1e9); // return a max value
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        return dp[i][j] = min(grid[i][j] + solve(i - 1, j, grid, dp), grid[i][j] + solve(i, j - 1, grid, dp));
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(n - 1, m - 1, grid, dp);
    }
};