#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    int i = 0, j = v.size() - 1;
    int count = 0;
    while (i < j)
    {
        if (v[i] + v[j] <= x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    if (i == j)
    {
        count++;
    }
    cout << count;
    return 0;
}