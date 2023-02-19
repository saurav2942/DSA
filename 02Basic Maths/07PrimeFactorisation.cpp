/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;


// T.C - O(n^2) we can change it to n*sqrt(n)
bool isp(int n) {
    if (n == 2) return true;
    if (n % 2 == 0 && n > 2) return false;
    for (int i = 3; i < n;i += 2) if (n % i == 0) return false;
    return true;
}
void Naive(int n) {
    vector<int>pf;
    for (int i = 2;i < n;i++) {
        if (n % i == 0 && isp(i)) pf.push_back(i);
    }
    for (auto& x : pf) cout << x << " ";
    return;
}

// Time Complexity - O(n*sqrt(n))
void usingSieve(int n) {
    vector<int> v(n + 3);
    for (int i = 0;i <= n + 3;i++) v[i] = i;
    for (int i = 2;i <= n + 3;i++) {
        if (v[i] == i) {
            for (int j = i * i; j <= n;j += i) {
                if (v[j] == j) v[j] = i;
            }
        }
    }
    vector<int> pf;
    while (n != 1) {
        pf.push_back(v[n]);
        n /= v[n];
    }
    for (auto& x : pf) cout << x << " ";
    return;
}


// T.C - O(nlogn)
void solve() {
    int n; cin >> n;
    // Naive(n);
    vector<int>pf;
    if (n % 2 == 0) {
        pf.push_back(2);
        while (n % 2 == 0) n /= 2;
    }
    for (int i = 3;i <= sqrt(n);i += 2) {
        if (n % i == 0) {
            pf.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) pf.push_back(n);
    for (auto& x : pf) cout << x << " ";
    // usingSieve(n);
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