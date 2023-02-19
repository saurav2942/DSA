/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

string check(string s) {
    if (s.length() == 1) return s;
    return check(s.substr(1)) + s[0];
}

// bool check(string s, int st, int e) {
//     if (s[st] != s[e]) return false;
//     if (st >= e) return true;
//     return check(s, st + 1, e - 1);
// }

void solve() {
    string s;
    cin >> s;
    string st = check(s);
    cout << (st == s);
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}