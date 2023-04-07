#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        int count = 0;
        N = 0;
        while (N < arr.size() && K > 0)
        {
            K -= arr[N++];
            count++;
            if (K < 0)
            {
                count--;
            }
        }
        return count;
    }
};