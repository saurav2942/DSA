/*
ALL METHODS TO SOLVE THIS QN - https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/submissions/880568549/
*/

#include <bits/stdc++.h>
using namespace std;

bool solve() {
    int n; cin >> n;
    vector<int>v;
    int sum = 0;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    if (sum % 3) return false;
    int tt = sum / 3;
    int cnt = 0;
    sum = 0;
    for (auto& x : v) {
        sum += x;
        if (sum == tt) {
            cnt++;
            sum = 0;
        }
        if (cnt == 3) return true;
    }
    return (cnt == 3);
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout << solve();
    return 0;
}