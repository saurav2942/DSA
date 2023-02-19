/*
2-Fibbonacci Numbers Mean A Number Will Be a Sum of previous Two Nummbers
3-Fibbonacci Numbers Mean A Number Will Be a Sum of previous Three Nummbers
4-Fibbonacci Numbers Mean A Number Will Be a Sum of previous Four Nummbers

it can be solved by using window sliding Technique
*/

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int m) {
    vector<int>v(n - 1, 0);
    v.push_back(1);
    if (m <= n) {
        for (int i = 0;i < m;i++) {
            cout << v[i] << " ";
        }
        return;
    }
    else {
        int sum = 0;
        for (int i = 0;i < m;i++) {
            if (i < n) sum += v[i];
            else if (i == n) v.push_back(sum);
            else if (i > n) {
                sum = sum - v[i - n - 1] + v[i - 1];
                v.push_back(sum);
            }
            cout << v[i] << " ";
        }
    }
    return;
}


int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        solve(n, m);
        cout << endl;
    }
    return 0;
}