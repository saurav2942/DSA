/*
ALL METHODS TO SOLVE THIS QN -
*/

/*
I/P - "pippxxppiixipi"
O/P - "3.14ppxxp3.14ixi3.14"
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity - O(n)
string replace(string s, string ans = "", int i = 0) {
    if (i == s.length()) return ans;
    if (s[i] == 'p' && s[i + 1] == 'i') {
        ans += "3.14";
        return replace(s, ans, i + 2);
    }
    else {
        ans += s[i];
        return replace(s, ans, i + 1);
    }
}

void solve() {
    string s; cin >> s;
    cout << replace(s);
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