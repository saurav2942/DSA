/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

//Recursion(NOT TAIL RECURSION)
int factorial(int n) {
    if (n == 1 || n == 0) return 1;
    else return n * factorial(n - 1);
}
//TAIL RECURSION
// int factorial(int n, int val=1) {
//     if (n == 0) return val;
//     else return factorial(n - 1, n*val);
// }

//Iterative
// int factorial(int n) {
//     int ans = 1;
//     for (int i = 1;i <= n;i++) {
//         ans *= i;
//     }
//     return ans;
// }

void solve() {
    int n; cin >> n;
    cout << factorial(n);
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