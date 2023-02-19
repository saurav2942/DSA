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
    // Two Pointer Approch
    int i = 0, j = n - 1;
    while (i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    for (auto x : v) cout << x << " ";
    return 0;
}