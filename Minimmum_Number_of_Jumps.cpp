#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        int i = 0, j = 0, jumps = 0;
        for (int i = 0; i < n; i++)
        {
            int farthest = 0;
            for (int k = i; k <= j; k++)
            {
                farthest = max(farthest, arr[k]);
            }
            i = j + 1;
            j = farthest;
            jumps++;
            if (farthest >= n - 1)
            {
                break;
            }
        }
        return jumps;
    }
};
