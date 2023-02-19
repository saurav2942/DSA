#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)


int main() {
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = v[1] - v[0], mine = v[0];
    for (int i = 1;i < n;i++) {
        ans = max(ans, v[i] - mine);
        mine = min(mine, v[i]);
    }
    cout << ans;
    return 0;
}