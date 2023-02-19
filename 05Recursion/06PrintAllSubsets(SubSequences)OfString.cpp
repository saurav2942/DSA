/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity - 2T(n-1)+c;
// T.C - O(2^n)

vector<string> v;
void subsets(string s, string ss = "") {
    if (s.length() == 0) { v.push_back(ss); return; }
    subsets(s.substr(1, s.length() - 1), ss);
    subsets(s.substr(1, s.length() - 1), ss + s[0]);
}

void solve() {
    string s; cin >> s;
    subsets(s);
    sort(v.begin(), v.end());
    for (auto& x : v) cout << x << " / ";
    return;
}

//Iterative Solution
// void solve() {
//     string s; cin >> s;
//     for (int i = 0;i < s.length();i++) {
//         for (int j = i;j < s.length();j++) {
//             cout << s.substr(i, j - i + 1) << endl;
//         }
//         cout << endl;
//     }
//     return;
// }


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}