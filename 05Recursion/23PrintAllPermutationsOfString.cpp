#include<bits/stdc++.h>
using namespace std;

//Time Complexity n^3
void solve(string s, string ans = "") {
    if (s.length() == 0) cout << ans << "\n";
    sort(s.begin(), s.end());
    for (int i = 0;i < s.length();i++) {
        string str = s.substr(0, i) + s.substr(i + 1);
        solve(str, ans + s[i]);
    }
    return;
}

//Time O(n!)
void solve2(string s, int i = 0) {
    if (i == s.length()) {
        cout << s << "\n";
        return;
    }
    for (int j = i;j < s.length();j++) {
        swap(s[i], s[j]);
        solve2(s, i + 1);
        swap(s[i], s[j]);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // solve(s);
        solve2(s);
    }
    return 0;
}



/*
Input -
2
ABC
ABCD

Output -
ABC
ACB
BAC
BCA
CAB
CBA
ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BACD
BADC
BCAD
BCDA
BDAC
BDCA
CABD
CADB
CBAD
CBDA
CDAB
CDBA
DABC
DACB
DBAC
DBCA
DCAB
DCBA

*/