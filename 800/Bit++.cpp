/*
Problem: Bit++ (282A)
Difficulty: 800
Link: https://https://codeforces.com/problemset/problem/282/A
Tags: Implementation
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    //initial value of x
    int x=0; 

    while (n--){
        string s;
        cin >> s;
        //If the string does not have "++", the find method prints "string::npos"
        if(s.find("++") != string::npos){
            //If "++" is found, the value of x increases
            x++;
        }else{
            x--;
        }
    };

    cout<<x<<endl;
    return 0;
}
