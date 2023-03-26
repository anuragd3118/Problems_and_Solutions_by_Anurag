#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        map<int, pair<int, int>> m;
        for (auto i : nums1)
        {
            m[i].first++;
        }
        for (auto i : nums2)
        {
            m[i].second++;
        }
        for (auto i : m)
        {
            int a = i.first;
            int b = min(i.second.first, i.second.second);
            while (b--)
            {
                ans.push_back(a);
            }
        }
        return ans;
    }
};