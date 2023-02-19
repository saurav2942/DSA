/*
ALL METHODS TO SOLVE THIS QN - https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(2^n+2^(n-1))
// Can Improved By Using Dynammic Programming(Psudo Polynomial) Or BackTracking...............


// int CountSubSets(vector<int> v, int k, int sum = 0, vector<int> ct = {}) {
//     if (sum == k) return 1;
//     if (v.size() == 0) return 0;
//     int t = v.back();
//     v.erase(v.end() - 1);
//     vector<int> cc(ct); cc.push_back(t);
//     // cout << t << " " << sum << "/";
//     return CountSubSets(v, k, sum, ct) + CountSubSets(v, k, sum + t, cc);
// }

int CountSubSets(vector<int> v, int n, int sum) {
    if (n == 0) return (sum == 0) ? 1 : 0;
    return CountSubSets(v, n - 1, sum) + CountSubSets(v, n - 1, sum - v[n - 1]);
}


void solve() {
    int n, k; cin >> n >> k;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    if (k == 0) {
        cout << 0; return;
    }
    cout << CountSubSets(v, n, k);
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