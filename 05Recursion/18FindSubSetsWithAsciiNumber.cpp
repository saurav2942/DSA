/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - ABC
O/P - C 67 B BC B67 66 66C 6667 A AC A67 AB ABC AB67 A66 A66C A6667 65 65C 6567 65B 65BC 65B67 6566 6566C 656667
*/
#include <bits/stdc++.h>
using namespace std;

void solve2(string s, string ans = "", int i = 0) {
    if (i == s.length()) {
        cout << ans << '\n';
        return;
    }
    solve2(s, ans, i + 1);
    solve2(s, ans + s[i], i + 1);
    solve2(s, ans + to_string((int)s[i]), i + 1);
    return;
}

void solve() {
    string s; cin >> s;
    solve2(s);
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