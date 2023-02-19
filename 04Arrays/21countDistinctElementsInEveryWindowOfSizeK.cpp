/*
ALL METHODS TO SOLVE THIS QN - https://www.codingninjas.com/codestudio/problem-details/count-distinct-element-in-every-k-size-window_920336
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int>v;
    vector<int>ans;
    unordered_map<int, int> m;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
        if (k > i) m[a]++;
    }
    ans.push_back(m.size());
    for (int i = k;i < n;i++) {
        m[v[i]]++;
        if (m[v[i - k]] == 1) m.erase(m.find(v[i - k]));
        else m[v[i - k]]--;
        ans.push_back(m.size());
    }
    for (auto& x : ans) cout << x << " ";
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}