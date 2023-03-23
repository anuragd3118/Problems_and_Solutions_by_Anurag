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
    int count = 1; // minimum ek round to hoga hi
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
    // Notice that the position of numbers is crucial here. Why do we need another round for 2? Because it comes before 1. We don't need another round for 3 because it comes after 2. Similarly, we need another round for 4 because it comes before 2. So , when considering each number, we only need to be concerned with the position of the number that comes before it in the order. When considering 2, we look at the position of 1? Does 1 come before or after 2? It it comes after, we don't need another round. But if it comes before, we'll need an extra round. For each number, we look at this condition and increment the round count if necessary. This way, we can figure out the total number of rounds without simulating the whole process.
}