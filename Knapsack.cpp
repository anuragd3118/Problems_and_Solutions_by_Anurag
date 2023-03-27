#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        vector<pair<int, int>> v; // value, weight
        for (int i = 0; i < n; i++)
        {
            v.push_back({val[i], wt[i]});
        }
        sort(v.begin(), v.end(), greater<int>());
        int i = 0;
        int sum = 0;
        while (W > 0 && i < n)
        {
            int temp_val = v[i].first;
            int temp_wt = v[i].second;
            if (temp_wt <= W)
            {
                sum += temp_val;
                W -= temp_wt;
                i++;
            }
            else
            {
                i++;
            }
        }
        return sum;
    }
};