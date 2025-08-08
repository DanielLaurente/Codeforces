/*
Problem: Way Too Long Words (71A)
Difficulty: 800
Link: https://codeforces.com/problemset/problem/71/A
Problem tags: 
-Strings.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    
    while (n--){

        //Enter the word
        string word;
        cin >> word;
        //if the word has a size greater than 10
        if (word.size() > 10) {
            //write the first letter, the numbers in the middle (the size - 2) and the last letter.
            cout << word.front() << (word.size() - 2) << word.back() << '\n';
        } else {
            cout << word << '\n';
        }
    }   
    return 0;
}
