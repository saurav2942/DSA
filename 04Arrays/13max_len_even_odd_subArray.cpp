/* <---------------------------------  KADAN'S ALGORITHM -------------------------------> */

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {
    int cnt = 1;
    int ans = 0;
    for (int i = 1;i < v.size();i++) {
        if (v[i] % 2 == 0) {
            if (v[i - 1] % 2 != 0) {
                cnt++;
            }
            else {
                cnt = 1;
            }
        }
        else {
            if (v[i - 1] % 2 == 0) {
                cnt++;
            }
            else {
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans;
    return;
}


int main() {
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    solve(v);
    return 0;
}