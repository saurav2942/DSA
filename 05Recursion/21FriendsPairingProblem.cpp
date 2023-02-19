/*
ALL METHODS TO SOLVE THIS QN - https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1
*/

/*
I/P - 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
O/P - 1, 2, 4, 10, 26, 76, 232, 764, 2620, 9496
*/
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;


void solve() {
    int n; cin >> n;
    vector<int>v{ 0, 1, 2 };
    for (int i = 3;i <= n;i++) {
        // a[i-1] == when We fixed One Element(here ewe can use the previously iteration to get the result), a[i-2] when we fixed two elements then we will have (i-1) free elements(which can we processed using a[i-2])
        int cc = (v[i - 1] % mod + (i - 1) * v[i - 2] % mod) % mod;
        v.push_back(cc);
    }
    for (auto& x : v) cout << x << " ";
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

/*
1 - {1}
2 - {1, 2}, {12}
3 - {1,2, 3}, {1, 23}, {2, 13}, {3, 12}
4 - {1, 2, 3, 4}, {1, 2, 34}, {1, 3, 24}, {1, 4, 23}, {12, 3, 4}, {12, 34}, {13, 2, 4}, {13, 24}, {14, 2, 3}, {14, 23}
*/