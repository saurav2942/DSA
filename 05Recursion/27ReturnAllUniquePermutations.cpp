#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>v, int k = 0) {
    if (k == v.size()) {
        for (auto& x : v) cout << x << " ";
        cout << "\n";
    }
    for (int i = k;i < v.size();i++) {
        if (i != k && v[i] == v[k]) continue;
        swap(v[k], v[i]);
        solve(v, k + 1);
        swap(v[k], v[i]);
    }
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a; cin >> a;
            v.push_back(a);
        }
        solve(v);
        cout << endl;
    }
    return 0;
}