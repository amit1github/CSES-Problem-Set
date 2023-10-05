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


#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string str = "hello";
    std::unordered_map<char, int> charCount;

    for (char c : str) {
        // Check if the character is already in the map
        if (charCount.find(c) != charCount.end()) {
            // If it's in the map, increment the count
            charCount[c]++;
        } else {
            // If it's not in the map, add it with a count of 1
            charCount[c] = 1;
        }
    }

    // Print the character counts
    for (const auto& pair : charCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
