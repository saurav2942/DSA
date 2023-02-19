/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

int degitSum(int n) {
    if (n == 0) return 0;
    return n % 10 + degitSum(n / 10);
}

void solve() {
    int n; cin >> n;
    cout << degitSum(n);
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}