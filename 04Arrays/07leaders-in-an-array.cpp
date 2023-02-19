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
    int max = v.back();
    stack<int>ans;
    ans.push(max);
    for (int i = n - 2;i >= 0;i--) {
        if (v[i] > max) {
            ans.push(v[i]);
            max = v[i];
        }
    }
    n = ans.size();
    for (int i = 0;i < n;i++) {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}