/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - "aaaabbbbccceeeddd"
O/P - "abced"
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(n^2)
// string removeD(string s) {
//     if (s.length() == 0) return "";
//     string ans = removeD(s.substr(1));
//     if (s[0] == ans[0]) return ans;
//     else return s[0] + ans;
// }


// Time Complexity - O(n)
string removeD(string s, string ans = "", int i = 0) {
    if (i == s.length()) return ans;
    if (s[i] != ans[ans.length() - 1]) ans += s[i];
    return removeD(s, ans, i + 1);
}

void solve() {
    string s; cin >> s;
    cout << removeD(s);
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