#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findPlatform(int arr[], int dep[], int n)
    {
        vector<pair<int, int>> time;
        for (int i = 0; i < n; i++)
        {
            time.push_back({arr[i], 1});
            time.push_back({dep[i] + 1, -1}); // to occupy the platfrom till the train departs
        }
        sort(time.begin(), time.end());
        int max_train = 0;
        int temp_train = 0;
        for (int i = 0; i < time.size(); i++)
        {
            temp_train += time[i].second;
            max_train = max(max_train, temp_train);
        }
        return max_train;
    }
};
