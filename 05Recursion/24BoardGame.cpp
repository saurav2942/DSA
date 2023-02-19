#include<bits/stdc++.h>
using namespace std;


// Iterative O(n)
void Iterative(int n) {
    vector<int> v = { 0, 1, 1 };
    for (int i = 3;i <= n;i++) {
        v.push_back(2 * v[i - 1]);
    }
    cout << v[n] << "\n";
    return;
}

int solve(int n) {
    if (n == 1 || n == 2) return 1;
    return solve(n - 1) * 2;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int i, j; cin >> i >> j;
        cout << solve(j - i + 1) << "\n";
    }
    return 0;
}



/*
Input -
Start Position- 0
End  Position - 3

Output -
Number Of Ways To Reach - 4
*/