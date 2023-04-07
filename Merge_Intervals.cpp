#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<pair<int, int>> v;
        for (auto i : intervals)
        {
            v.push_back({i[0], i[1]});
        }
        sort(v.begin(), v.end());
        int i = 0;
        while (i < v.size() - 1)
        {
            if (v[i].second >= v[i + 1].first) // == because [1,4],[4,5]
            {
                v[i + 1].second = max(v[i + 1].second, v[i].second);
                v[i + 1].first = min(v[i + 1].first, v[i].first);
                v.erase((v.begin() + i));
            }
            else
            {
                i++;
            }
        }
        vector<vector<int>> ans;
        for (auto i : v)
        {
            vector<int> temp(2);
            temp[0] = i.first;
            temp[1] = i.second;
            ans.push_back(temp);
        }
        v.clear();
        return ans;
    }
};