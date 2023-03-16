#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        vector<int> back_min;
        int temp = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] <= temp)
            {
                back_min.push_back(prices[i]);
                temp = prices[i];
            }
            else
            {
                back_min.push_back(temp);
            }
        }
        int ans = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            ans = max(ans, prices[i] - back_min[i]);
        }
        return ans;
    }
};