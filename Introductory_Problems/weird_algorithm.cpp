#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;

    cin >> n;

        while(n != 1) // algorithm repeats until n is one.
        {
            cout << n << " "; // did this to log sequence
            if (n%2==0)
            {
                n = n / 2;
            } else {
                n = n * 3 + 1;
            }
        }
    
    cout << 1 << endl;
}
