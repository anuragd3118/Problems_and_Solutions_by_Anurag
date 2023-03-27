#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int majorityElement(int a[], int size)
    {
        if (size == 1)
        {
            return a[0];
        }
        else if (size == 2)
        {
            if (a[0] != a[1])
            {
                return -1;
            }
            else
            {
                return a[0];
            }
        }
        int num = a[0];
        int freq = 1;
        for (int i = 1; i < size; i++)
        {
            if (num == a[i])
            {
                freq++;
            }
            else
            {
                freq--;
                if (freq == 0)
                {
                    num = a[i];
                    freq = 1;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (num == a[i])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return num;
        }
        return -1;
    }
};