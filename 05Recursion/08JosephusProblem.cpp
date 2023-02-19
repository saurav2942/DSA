/*
ALL METHODS TO SOLVE THIS QN - https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
*/

#include <bits/stdc++.h>
using namespace std;


// numbering of people are from 0 to n-1..........
// Time Complexity - O(n)
int josephus(int n, int k) {
    if (n == 1) return 0;
    return (josephus(n - 1, k) + k) % n;
}

void solve() {
    int n, k; cin >> n >> k;
    cout << josephus(n, k);
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