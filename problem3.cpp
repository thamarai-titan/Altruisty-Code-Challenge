#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cout << "Enter the length of the Segments :" << endl;
    cin >> k;

    int n;
    cout << "Enter the length of the array :" << endl;
    cin >> n;

    int arr[n];
    int count = 0;
    cout << "Enter the values for the array" << endl;
    while (count < n)
    {
        cin >> arr[count];
        count++;
    }

    int maximum = INT_MIN;

    for (int i = 0; i <= n - k; i++)
    {
        int minimum = INT_MAX;
        for (int j = i; j < i + k; j++)
        {
            minimum = min(minimum, arr[j]);
        }
        maximum = max(maximum, minimum);
    }
    cout << "the maximum of the subarrays is" << maximum;
    return 0;
}