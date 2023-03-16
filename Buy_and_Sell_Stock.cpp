#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &price)
{
    vector<int> locals;
    int n = price.size();
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        if (price[1] > price[0])
        {
            return price[1] - price[0];
        }
        else
        {
            return 0;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (i == 1 && price[i - 1] < price[i])
        {
            locals.push_back(i - 1); // local minima
        }

        if (price[i - 1] >= price[i] && price[i] < price[i + 1])
        {
            locals.push_back(i); // local minima
        }
        else if (price[i - 1] < price[i] && price[i] >= price[i + 1])
        {
            locals.push_back(i); // local maxima
        }

        if (i == n - 2 && price[i + 1] > price[i])
        {
            locals.push_back(i + 1); // local maximas
        }
    }
    sort(locals.begin(), locals.end());
    int total_profit = 0;
    if (locals.size() == 0)
    {
        cout << "No Profit" << endl;
    }
    else if (locals.size() % 2 == 0)
    {
        for (int i = 0; i < locals.size(); i += 2)
        {
            cout << "(" << locals[i] << " " << locals[i + 1] << ") ";
            total_profit += price[locals[i + 1]] - price[locals[i]];
        }
        cout << endl;
    }
    return total_profit;
}