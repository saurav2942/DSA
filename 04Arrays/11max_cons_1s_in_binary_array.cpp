#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v;
    int ans = 0;
    int cnt = 0;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        v.push_back(a);
        if (a == 1) {
            cnt++;
        }
        else {
            cnt = 0;
        }
        ans = max(cnt, ans);
    }
    cout << ans << " ";
    return 0;
}