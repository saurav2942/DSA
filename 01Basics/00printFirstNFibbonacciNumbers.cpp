#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    vector<int> v = { 0,1 };
    if (m < 2) { cout << 0 << " "; return; }
    cout << 0 << " " << 1 << " ";
    for (int i = 2;i < m;i++) {
        v.push_back(v[i - 1] + v[i - 2]);
        cout << v[i] << " ";
    }
    return;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        solve(n, m);
        cout << endl;
    }
    return 0;
}