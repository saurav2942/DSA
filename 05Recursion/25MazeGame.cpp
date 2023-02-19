#include<bits/stdc++.h>
using namespace std;

vector<int>v = { 0, 1 };
int solve2(int n) {
    if (n == 1 || n == 2) {
        v.push_back(1);
        return v[v.size() - 1];
    }
    v.push_back(solve2(n - 1) * 2);
    return v[v.size() - 1];
}

int solve(int n) {
    if (n == 1) return 1;
    return solve(n - 1) * v[n] * 2;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int i, j; cin >> i >> j;
        solve2(j - i + 1);
        cout << solve(j - i + 1) << "\n";
    }
}