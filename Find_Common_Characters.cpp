#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;

class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<string> ans;
        map<string, pair<int, int>> m;
        for (int i = 0; i < words[0].size(); i++)
        {
            m[to_string(words[0][i])].first++;
        }
        for (int i = 1; i < words.size(); i++)
        {
            
        }
        // for (auto i : nums2)
        // {
        //     m[i].second++;
        // }
        // for (auto i : m)
        // {
        //     int a = i.first;
        //     int b = min(i.second.first, i.second.second);
        //     while (b--)
        //     {
        //         ans.push_back(a);
        //     }
        // }
        return ans;
    }
};