/*
ALL METHODS TO SOLVE THIS QN -
*/

// when we subtract two numbers their gcd reamins constant.... 
// like GCD(42, 24)==GCD(24, 18)==GCD(18, 6)==GCD(6, 12)==GCD(6, 6)....

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if (a % b == 0) return b;
    return GCD(b, a % b);
}

void solve() {
    int a, b; cin >> a >> b;
    cout << GCD(a, b);
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