#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k)
    {
        long long total_ways = 1LL * k * k * (k * k - 1) / 2; // C(k^2, 2)

        // Subtract the ways the knights can attack each other
        long long attacking_ways = 4 * (k - 1) * (k - 2);
        total_ways -= attacking_ways;

        cout << total_ways << endl;
    }

    return 0;
}
