#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    };

    long long moves = 0;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1])
        {
            long long diff = array[i - 1] - array[i];
            moves += diff;

            array[i] = array[i - 1];
        }
    };

    cout << moves;

    return 0;
}