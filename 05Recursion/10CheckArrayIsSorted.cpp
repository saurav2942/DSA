/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

// Time complecity - O(n^2);
// bool check(int n, vector<int> v) {
//     if (n == 1) return true;
//     vector<int> ct;
//     for (int i = 1;i < n;i++) ct.push_back(v[i]);
//     if (check(n - 1, ct)) return v[0] <= v[1];
//     else return false;
// }


// Time Complexity - O(n);
bool check(int n, vector<int>& v, int i = 0) {
    if (n == 2) return v[i] <= v[i + 1];
    if (check(n - 1, v, i + 1)) return v[i] <= v[i + 1];
    else return false;
}

void solve() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    cout << check(n, v);
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