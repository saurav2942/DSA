/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

//Recursive Solution
int fib(int n) {
    if (n == 1 || n == 0) return n;
    return fib(n - 1) + fib(n - 2);
}

//Iterative Soln
// int fib(int n) {
//     int ans = 1;
//     int prev = 0;
//     if (n == 1 || n == 0) return n;
//     for (int i = 2;i <= n;i++) {
//         int cnt = ans;
//         ans += prev;
//         prev = cnt;
//     }
//     return ans;
// }

void solve() {
    int n;
    cin >> n;
    cout << fib(n);
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