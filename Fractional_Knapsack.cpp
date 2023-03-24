#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Item
{
    int value;
    int weight;
};

class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({arr[i].value / arr[i].weight, {arr[i].value, arr[i].weight}});
        }
        sort(v.begin(), v.end());
        int value = 0;
        int i = 0;
        while (W > 0 && i < n)
        {
            if (W >= v[i].second.second)
            {
                value += v[i].second.first;
                W -= v[i].second.second;
                i++;
            }
            else if (W < v[i].second.second && W >= v[i].first)
            {
                value += (W * v[i].second.first) / v[i].second.second;
                i++;
            }
            else
            {
                break;
            }
        }
        return value;
    }
};
