#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    long long totalSum = n*(n+1)/2;
    long long sumOfGivenNumbers = 0;
    
    for (int i = 1; i < n; i++)
    {
      int x;
      cin >> x;
      sumOfGivenNumbers += x;
    };

    long long missingNumber = totalSum - sumOfGivenNumbers;

    cout << missingNumber << "\n";
}
