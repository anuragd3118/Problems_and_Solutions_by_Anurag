#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> nextSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans;
        ans.push_back(-1);
        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> previousSmallerElement(vector<int> &arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans;
        for (int i = 0; i <= n - 1; i++)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();

        vector<int> nextSmaller(n);
        nextSmaller = nextSmallerElement(heights, n);

        vector<int> previousSmaller(n);
        previousSmaller = previousSmallerElement(heights, n);
        int MaxArea = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int height = heights[i]; // height

            if (nextSmaller[i] == -1) // breadth
            {
                nextSmaller[i] = n;
            }
            int breadth = nextSmaller[i] - previousSmaller[i] - 1;

            int area = height * breadth; // area
            MaxArea = max(MaxArea, area);
        }
        return MaxArea;
    }
};