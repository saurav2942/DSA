/*
ALL METHODS TO SOLVE THIS QN -
*/


#include <bits/stdc++.h>
using namespace std;


// It will all subarrays indexes with given sum
void solve() {
    int n, s; cin >> n >> s;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    unordered_map<int, int>m;
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += v[i];
        if (m.find(sum - s) != m.end()) {
            cout << m[sum - s] + 1 << " " << i << endl;
        }
        else m[sum] = i;
    }
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}