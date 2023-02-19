/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

//Time Complexity - O(n)
string reverse(string s, int i = 0) {
    if (i > s.length() - i - 1) return s;
    swap(s[i], s[s.length() - i - 1]);
    return reverse(s, i + 1);
}

void solve() {
    string s; cin >> s;
    cout << reverse(s);
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}