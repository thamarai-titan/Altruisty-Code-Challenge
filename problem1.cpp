#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the days : " << " ";
    cin >> n;

    int arr[n];
    int count = 0;
    cout << "Enter the prices" << " " << endl;
    while (count < n)
    {
        cin >> arr[count];
        count++;
    }
    cout << "The Stock prices: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
            mini = arr[i];
    }

    int profit;
    profit = max - mini;

    cout << " The Best Profit of the Stocks was : " << profit << endl;

    return 0;
}
