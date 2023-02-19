/*
Equilibrium Point - Some Before This Point == Some After This Point
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    vector<int>pfsum;
    pfsum.push_back(v[0]);
    for (int i = 1;i < n;i++) {
        pfsum[i] = v[i] + pfsum[i - 1];
    }
    int sum = pfsum[n - 1];
    if (sum - v[0] == 0) {
        cout << "YES " << 0 << " " << v[0];
        return;
    }
    for (int i = 1;i < n - 1;i++) {
        if (pfsum[i] - v[i] == sum - pfsum[i]) {
            cout << "YES " << i << " " << v[i];
            return;
        }
    }
    if (sum - v[n - 1] == 0) {
        cout << n - 1 << " " << v[n - 1];
        return;
    }
    cout << "NO";
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}