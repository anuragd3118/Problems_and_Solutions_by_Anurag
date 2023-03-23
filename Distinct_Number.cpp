#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}