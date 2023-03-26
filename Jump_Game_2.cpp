#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int left = 0, right = 0;
        int n = nums.size();
        int jump_count = 0;
        while (right < n - 1)
        {
            int farthest = 0;
            for (int i = left; i <= right; i++)
            {
                farthest = max(farthest, i + nums[i]);
            }
            left = right + 1;
            right = farthest;
            jump_count++;
            if (left >= n - 1)
            {
                break;
            }
        }
        return jump_count;
    }
};