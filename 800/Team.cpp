/*
Problem: Team (231A)
Difficulty: 800
Link: https://codeforces.com/problemset/problem/231/A
Tags: Brute force, Greedy
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, total;
    total=0;
    cin >> n;
    while (n--)
    {
        int p,v,t;
        cin >> p >> v >> t;
        //Count if at least two friends are safe
        if(p+v+t>=2){
            //Update the counter
            total++; 
        }
    }
    
    cout<<total<<endl;
    
    return 0;
}
