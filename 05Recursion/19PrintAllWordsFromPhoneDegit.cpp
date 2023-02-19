/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - 2 3
O/P - ad ae af bd be bf cd ce cf
*/
#include <bits/stdc++.h>
using namespace std;

void solve3(char ch, string s, int i = 0) {
    if (i == s.length()) return;
    string ans = "";
    ans += ch;
    ans += s[i];
    cout << ans << " ";
    solve3(ch, s, i + 1);
}

void solve2(string s1, string s2, int i = 0) {
    if (i == s1.length()) return;
    solve3(s1[i], s2);
    solve2(s1, s2, i + 1);
}

void solve() {
    string key[] = { "", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    int x, y;
    cin >> x >> y;
    solve2(key[x], key[y]);
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