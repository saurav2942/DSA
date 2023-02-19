/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>arr;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        arr.push_back(a);
    }
    int cnt = 0;
    int ans = 0;
    unordered_map<int, int> m;
    m[0] = -1;
    int in = -1, jn = -1;
    for (int i = 0;i < arr.size();i++) {
        if (arr[i] == 0) cnt--;
        else cnt++;
        int d = 0; // just nobody
        if (m.find(cnt) != m.end()) {
            // ans = max(ans, i - m[cnt]);
            if (i - m[cnt] > ans) {
                in = m[cnt] + 1;
                jn = i;
                ans = i - m[cnt];
            }
        }
        else m[cnt] = i;
    }
    cout << in << " " << jn;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}