#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans < v[i])
        {
            break;
        }
        else
        {
            ans += v[i];
        }
    }
    cout << ans;
    return 0;
}