#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Solution
{
public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < M.size(); i++)
        {
            s.push(i);
        }
        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (M[a][b] == 1 && a != b)
            {
                s.push(b);
            }
            else if (M[b][a] == 1 && a != b)
            {
                s.push(a);
            }
        }
        if (s.empty())
            return -1;
        int celebrity = s.top();
        for (int i = 0; i < M.size(); i++)
        {
            if ((celebrity != i) && (M[celebrity][i] != 0 || M[i][celebrity] != 1))
            {
                return -1;
            }
        }
        return celebrity;
    }
};