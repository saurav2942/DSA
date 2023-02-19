#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ct(5, 0);
        vector<int> v; int ans = 0;
        for (int i = 0;i < n;i++) {
            int a; cin >> a;
            v.push_back(a);
            ct[a]++;
        }
        ans += ct[4];
        if (ct[3] >= ct[1]) {
            ans += ct[3];
            ct[1] = 0;
        }
        else {
            ct[1] -= ct[3];
            ans += ct[3];
        }
        if (ct[2] >= 2) {
            ans += (ct[2] * 2) / 4;
            ct[2] = (ct[2] * 2) % 4;
        }
        if (ct[1] >= 4) {
            ans += ct[1] / 4;
            ct[1] = ct[1] % 4;
        }
        if (ct[1] != 0 || ct[2] != 0) {
            if (ct[2] != 0) {
                ans++;
                ct[1] -= 2;
            }
            if (ct[1] > 0) {
                if (ct[1] <= 4) ans++;
                else ans += 2;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}