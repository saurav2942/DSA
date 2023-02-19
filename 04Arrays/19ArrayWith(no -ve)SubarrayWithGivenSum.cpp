// <<<<<<<<<---------------------Window Sliding Technique-------------------------->>>>>>>>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

// It Will NoT Check How Many Is There
// void solve(vector<int>& v, int s) {
//     int sum = 0; int i = 0; int j = 0;
//     while (i < v.size()) {
//         if (sum == s) {
//             cout << "YES"; return;
//         }
//         if (sum > s) {
//             sum -= v[j++];
//         }
//         else sum += v[i++];
//     }
//     cout << "NO";
//     return;
// }

// Using Hashing(USE MAP) it will print all subarrays//
void solve(vector<int>& v, int s) {
    int sum = 0;
    bool fl = true;
    unordered_map<int, int> m;
    for (int i = 0;i < v.size();i++) {
        sum += v[i];
        if (m.find(sum - s) != m.end()) {
            cout << m[sum - s] + 1 << " " << i << endl;
            fl = false;
        }
        else m[sum] = i;
    }
    if (fl) cout << "NO";
    return;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        solve(v, s);
        cout << endl;
    }
    return 0;
}