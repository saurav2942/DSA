/*
ALL METHODS TO SOLVE THIS QN -
*/

// Time = 2T(n-1)+C;
// T.C - O(2^n)

#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char A, char B, char C, int i = 1) {
    if (n == 0) return;
    TowerOfHanoi(n - 1, A, C, B, i++);
    cout << "Move" << n << " Disc From " << A << " To " << C << "\n";
    TowerOfHanoi(n - 1, B, A, C, i++);
}

void solve() {
    int n; cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
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