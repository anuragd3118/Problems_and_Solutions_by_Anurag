#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    bool pos = false;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t >= 0)
        {
            pos = true;
        }
        v.push_back(t);
    }
    if (!pos)
    {
        long long maxi = INT64_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, v[i] * 1ll);
        }
        cout << maxi;
        return 0;
    }
    long long temp = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        temp += (v[i] * 1ll);
        if (temp < 0)
        {
            temp = 0;
        }
        maxi = max(maxi, temp);
    }
    cout << maxi;
    return 0;
}