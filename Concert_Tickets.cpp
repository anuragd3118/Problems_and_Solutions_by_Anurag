#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    vector<int> buyer;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        s.insert((-1) * p);
    }
    for (int i = 0; i < m; i++)
    {
        int p;
        cin >> p;
        buyer.push_back(p);
    }
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        // for (int j = buyer[i]; j > 0; j--)
        // {
        //     if (s.find(j) != s.end())
        //     {
        //         ans.push_back(*s.find(j));
        //         s.erase(s.find(j));
        //         flag = true;
        //         break;
        //     }
        // }
        auto it = s.lower_bound((-1) * buyer[i]);
        if (it != s.end())
        {
            ans.push_back(*it * (-1));
            s.erase(it);
        }
        else
        {
            ans.push_back(-1);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}