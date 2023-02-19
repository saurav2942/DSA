/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a, b;
    for (int i = 0;i < n;i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i = 0;i < m;i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    vector<int>v;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            v.push_back(a[i]);
            i++;
        }
        else {
            v.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) v.push_back(a[i++]);
    while (j < b.size()) v.push_back(b[j++]);
    // for (auto x : v) pr(x);
    n += m;
    if (n % 2) cout << (v[n / 2]);
    else cout << ((v[n / 2] + v[n / 2 - 1]) / 2);
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}