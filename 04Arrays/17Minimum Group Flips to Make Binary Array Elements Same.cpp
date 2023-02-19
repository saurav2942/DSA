#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {
    int n = v.size(); int ans = 0;
    if (v[0] == v[n - 1]) {
        if (v[0] == 1) {
            for (int i = 0;i < n;i++) {
                if (v[i - 1] == 0 && v[i] != 0) {
                    ans++;
                }
            }
        }
        else {
            for (int i = 0;i < n;i++) {
                if (v[i - 1] == 1 && v[i] != 1) {
                    ans++;
                }
            }
        }
    }
    else {
        for (int i = 0;i < n;i++) {
            if (v[i - 1] == 1 && v[i] != 1) {
                ans++;
            }
        }
    }
    cout << ans << "\n"; return;
}

void printIn(vector<int>& v) {
    int n = v.size();
    for (int i = 1; i < n;i++) {
        if (v[i] != v[i - 1]) {
            if (v[i] != v[0]) {
                cout << "From " << i << " to ";
            }
            else {
                cout << (i - 1) << endl;
            }
        }
    }
    if (v[n - 1] != v[0]) {
        cout << (n - 1) << endl;
    }
    return;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        solve(v);
        printIn(v);
        cout << endl;
    }
    return 0;
}