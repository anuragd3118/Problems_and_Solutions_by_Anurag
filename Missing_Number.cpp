#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long temp = 0;
        cin >> temp;
        sum += temp;
    }
    long long prod = (1ll * n * (n + 1)) / 2;
    cout << max(prod - sum, sum - prod);
    return 0;
}