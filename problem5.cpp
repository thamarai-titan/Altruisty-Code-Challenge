#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int totalTrainees = 3;
    const int totalRounds = 3;

    int oxLevels[totalTrainees][totalRounds];

    for (int i = 0; i < totalRounds; i++)
    {
        for (int j = 0; j < totalTrainees; j++)
        {
            int oxygen;
            cout << "Enter oxygen value for trainee " << (j + 1) << " in round " << (i + 1) << ": ";
            cin >> oxygen;

            if (oxygen < 1 || oxygen > 100)
            {
                cout << "INVALID INPUT" << endl;
                return 0;
            }
            oxLevels[j][i] = oxygen;
        }
    }

    double averages[totalTrainees];
    double maxAverage = 0;
    vector<int> mostFitTrainees;

    for (int i = 0; i < totalTrainees; i++)
    {
        double total = 0;
        for (int j = 0; j < totalRounds; j++)
        {
            total += oxLevels[i][j];
        }
        averages[i] = round(total / totalRounds);

        if (averages[i] > maxAverage)
        {
            maxAverage = averages[i];
            mostFitTrainees.clear();
            mostFitTrainees.push_back(i + 1);
        }
        else if (averages[i] == maxAverage)
        {
            mostFitTrainees.push_back(i + 1);
        }
    }

    if (maxAverage < 70)
    {
        cout << "All trainees are unfit. Average Oxygen Values should be rounded." << endl;
    }
    else
    {
        cout << "Highest Average Oxygen Level: " << maxAverage << endl;
        for (int trainee : mostFitTrainees)
        {
            cout << "Trainee Number: " << trainee << endl;
        }
    }

    return 0;
}
