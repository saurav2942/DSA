/* <---------------------------------  KADAN'S ALGORITHM  -------------------------------> */
/* VERY IMPOSTANT QUSTION */
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0;i < v.size();i++) {
        sum = max(v[i], sum + v[i]);
        ans = max(ans, sum);
    }
    cout << -ans;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a;
            cin >> a;
            v.push_back(-a);
        }
        solve(v);
        cout << endl;
    }
    return 0;
}