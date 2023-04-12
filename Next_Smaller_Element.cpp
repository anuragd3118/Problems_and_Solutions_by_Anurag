#include <iostream>
#include <vector>
#include <string>
#include <stack>
// #include <bits>/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        s.push(arr[arr.size() - 1]);
        vector<int> ans;
        ans.push_back(-1);
        for (int i = n - 2; i >= 0; i--)
        {
            if (s.top() < arr[i])
            {
                ans.push_back(s.top());
            }
            else
            {
                while (s.top() >= arr[i])
                {
                    s.pop();
                }
                ans.push_back(s.top());
            }
            s.push(arr[i]);
        }
        for (int i = 0; i < ans.size() / 2; i++)
        {
            int temp = ans[i];
            ans[i] = ans[ans.size() - 1 - i];
            ans[ans.size() - 1 - i] = temp;
        }

        return ans;
    }
};