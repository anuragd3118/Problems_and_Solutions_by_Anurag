#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int minOperation(int n)
    {
        int count = 0;
        while (n > 1)
        {
            if (n % 2 == 1)
            {
                n--;
                count++;
            }
            n /= 2;
            count++;
        }
        return ++count;
    }
};