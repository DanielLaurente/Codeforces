/*
Problem: Watermelon
Difficulty: 800
Link: https://codeforces.com/problemset/problem/4/A
Problem tags:
- Brute force
- Math
*/

#include <bits/stdc++.h> // Includes almost all standard libraries
using namespace std;

int main() {
    // Speed up input and output
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int w; // Watermelon weight
    cin >> w; // Read weight

    // If the weight is even and not equal to 2, it can be split evenly
    if (w % 2 == 0 && w >= 4) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
