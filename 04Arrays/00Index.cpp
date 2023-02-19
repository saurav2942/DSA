#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {

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
        cout << endl;
    }
    return 0;
}