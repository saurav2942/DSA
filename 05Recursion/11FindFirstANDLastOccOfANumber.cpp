/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity - o(n)
void find(vector<int> v, int n, int x, int ct = -1, int i = 0) {
    if (v[i] == x) {
        if (ct == -1) {
            cout << i << " ";
            ct = i;
        }
        else ct = i;
    }
    if (n == 1) {
        cout << ct;
        return;
    }
    return find(v, n - 1, x, ct, i + 1);
}

void solve() {
    int n, x; cin >> n >> x;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    find(v, n, x);
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