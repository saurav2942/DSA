/*
ALL METHODS TO SOLVE THIS QN -
*/
/*  It can be used in many programming qustions related to finding ways to do something  */
// Qn - How many numbers from 1 to n are divisible by both 5 or 7......

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    cout << (n / a + n / b - n / (a * b)); // 5 or 7
    cout << (n / (a * b)); // 5 & 7
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}