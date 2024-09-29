#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total ballons :" << endl;
    cin >> n;

    char B[n];
    int count = 0;
    cout << "Enter the colors : " << endl;
    while (count < n)
    {
        cin >> B[count];
        count++;
    }

    unordered_map<char, int> colors;

    for (int i = 0; i < n; i++)
    {
        colors[B[i]]++;
    }

    for (const auto &color : B)
    {
        if (colors[color] % 2 != 0)
        {
            cout << color << " -> " << color << " color balloon is present odd number of times in the bunch." << endl;
            return 0;
        }
    }
    cout << "All are even" << endl;

    return 0;
}