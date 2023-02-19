/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - "axxbxxeecd"
O/P - "abeecdxxxx"
*/
#include <bits/stdc++.h>
using namespace std;


// Time Complexity - O(n)
// int i = 0; string t = "";
// string moveto(string s, string ans = "") {
//     if (i == s.length()) return ans + t;
//     if (s[i] == 'x') {
//         t += 'x', i++;
//     }
//     else ans += s[i++];
//     return moveto(s, ans);
// }

// Time Complexity - O(n)
string moveto(string s, int n = 0) {
    if (n == s.length()) return "";
    string ans = moveto(s, n + 1);
    if (s[n] == 'x') return ans + 'x';
    else return s[n] + ans;
}

void solve() {
    string s; cin >> s;
    cout << moveto(s);
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