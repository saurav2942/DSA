// <<<<<<<<<---------------------Window Sliding Technique-------------------------->>>>>>>>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, int k) {
    int sum = 0, ans = INT_MIN;
    int n = v.size();
    int j = 0;
    for (int i = 0;i < n;i++) {
        if (j < k) {
            sum += v[i];
            j++;
        }
        else {
            ans = max(ans, sum);
            sum = sum - v[i - k] + v[i];
        }
    }
    ans = max(ans, sum);
    cout << ans;
    return;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        solve(v, k);
        cout << endl;
    }
    return 0;
}