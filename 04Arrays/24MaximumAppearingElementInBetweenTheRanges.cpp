/*
ALL METHODS TO SOLVE THIS QN - https://practice.geeksforgeeks.org/problems/maximum-occured-integer4602/1
Similliar Qustion - https://codeforces.com/contest/1795/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

//NAIVE SOLUTION
// void solve() {
//     int n; cin >> n;
//     vector<pair<int, int>> v;
//     for (int i = 0;i < n;i++) {
//         int a, b;
//         cin >> a >> b;
//         v.push_back({ a, b });
//     }
//     pair<int, int> ans = { -1, 0 };
//     unordered_map<int, int>m;
//     for (int i = 0;i < n;i++)
//         for (int j = v[i].first;j <= v[i].second;j++) m[j]++;
//     for (auto& x : m)
//         if (x.second > ans.second) {
//             ans.first = x.first;
//             ans.second = x.second;
//         }
//     cout << ans.first << " " << ans.second;
//     return;
// }


//EFFICIENT SOLUTION
void solve() {
    int n; cin >> n;
    vector<pair<int, int>>v;
    for (int i = 0;i < n;i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({ a, b });
    }
    vector<int>vv(1000);
    for (int i = 0;i < n;i++) {
        vv[v[i].first]++;
        vv[v[i].second + 1]--;
    }
    int ans = -1;
    int cnt = 0;
    partial_sum(vv.begin(), vv.end(), vv.begin());
    for (int i = 0;i < 1000;i++) {
        if (cnt < vv[i]) {
            ans = i;
            cnt = vv[i];
        }
    }
    cout << ans;
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}