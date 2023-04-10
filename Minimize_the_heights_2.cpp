#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int ans = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            int maxa = max(arr[i - 1] + k, arr[n - 1] - k);
            int mini = min(arr[i] - k, arr[0] + k);
            if (mini < 0)
            {
                continue;
            }
            ans = min(maxa - mini, ans);
        }
        return ans;
    }
};