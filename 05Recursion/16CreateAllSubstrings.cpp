/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - ABCD
O/P -A AB ABC ABCD B BC BCD C CD D
*/
#include <bits/stdc++.h>
using namespace std;


// Time Complexity - O(n)
void printSubStr(string s, string ans = "", int i = 0) {
    if (i == s.length()) {
        cout << ans << "\n";
        return;
    }
    if (ans == "" || ans[ans.length() - 1] == s[i - 1]) {
        printSubStr(s, ans, i + 1);
        printSubStr(s, ans + s[i], i + 1);
    }
    else cout << ans << "\n";
    return;
}

void solve() {
    string s;cin >> s;
    printSubStr(s);
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