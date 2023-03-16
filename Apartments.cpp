#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app;
    vector<int> apar;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        app.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        apar.push_back(temp);
    }

    return 0;
}