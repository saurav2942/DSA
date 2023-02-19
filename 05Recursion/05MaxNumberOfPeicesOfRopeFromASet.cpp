#include<bits/stdc++.h>
using namespace std;

int maxCuts(int n, int a, int b, int c) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    int res = max(maxCuts(n - a, a, b, c), maxCuts(n - b, a, b, c));
    res = max(res, maxCuts(n - c, a, b, c));
    if (res == -1) return -1;
    return res + 1;
}

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << maxCuts(n, a, b, c);
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}


/*
Qn- Given a rope of n length and you need to find out max number of pieces you can make such that length of every piece is in set {a, b, c} for given values of a, b, c.
Ex- I/P - n=5, a=2, b=5, c=1
    O/P - 5
    I / P - n = 5, a = 4, b = 2, c = 6
    O / P - -1
I/P -
3
5 2 5 1
23 11 9 12
5 4 2 6
O/P-
5
2
-1

T.C - O(3^n)
Explained -
T(n)=3T(n-c)+c;
c->3c->9c->27c.......(n-1)terms
T.c - O(3^n-1)
*/