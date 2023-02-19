/*
ALL METHODS TO SOLVE THIS QN - https://www.geeksforgeeks.org/tiling-problem/
Similiar - https://leetcode.com/problems/domino-and-tromino-tiling/
           https://leetcode.com/problems/tiling-a-rectangle-with-the-fewest-squares/
*/

/*
I/P - 4, 3, 2, 1
O/P - 5, 3, 3, 1
*/


/*
Hint -
1 - {|}
2 - {||, =}
3 - {|||, |=, =|}
4 - {||||, ||=, |=|, =||, ==}
*/
#include <bits/stdc++.h>
using namespace std;

int solve2(int n) {
    if (n <= 2) return n;
    // fix first one + fix First two but horizontaly.....
    return solve2(n - 1) + solve2(n - 2);
}

void solve() {
    int n; cin >> n;
    cout << solve2(n);
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