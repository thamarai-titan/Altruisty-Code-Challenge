#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter the string: ";
    cin >> s;

    int n;
    cout << "Enter the number of queries: ";
    cin >> n;

    int sIndex[n], eIndex[n];

    cout << "Enter the start indices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> sIndex[i];
    }

    cout << "Enter the end indices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> eIndex[i];
    }

    for (int i = 0; i < n; i++)
    {
        int start = sIndex[i] - 1;
        int end = eIndex[i] - 1;

        int leftbar = -1;
        for (int j = start; j <= end; j++)
        {
            if (s[j] == '|')
            {
                leftbar = j;
                break;
            }
        }

        int rightbar = -1;
        for (int j = end; j >= start; j--)
        {
            if (s[j] == '|')
            {
                rightbar = j;
                break;
            }
        }

        int starCount = 0;
        if (leftbar != -1 && rightbar != -1 && leftbar < rightbar)
        {
            for (int j = leftbar + 1; j < rightbar; j++)
            {
                if (s[j] == '*')
                {
                    starCount++;
                }
            }
        }
        cout << starCount << endl;
    }

    return 0;
}
