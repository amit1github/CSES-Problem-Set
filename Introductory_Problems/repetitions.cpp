
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    char currentChar = n[0];
    int currentCount = 1;
    int maxCount = 1;

    for (int i = 1; i < n.length(); i++)
    {
        if (n[i] == currentChar)
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
            }
            currentChar = n[i];
            currentCount = 1;
        }
    }

    if (currentCount > maxCount)
    {
        maxCount = currentCount;
    }

    cout << maxCount << "\n";
}
