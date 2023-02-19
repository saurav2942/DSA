/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

void Normal(int n) {
    vector<int>primes;
    for (int i = 2;i <= n;i++) {
        if (i == 2) {
            primes.push_back(2);
            continue;
        }
        int fl = true;
        for (int j = 2;j < i;j++) if (i % j == 0) { fl = false; break; }
        if (fl) primes.push_back(i);
    }
    for (auto& x : primes) cout << x << " "; cout << endl;
    return;
}
void Good(int n) {
    vector<int>primes;
    for (int i = 2;i <= n;i += 1) {
        if (i == 2) {
            primes.push_back(2);
            continue;
        }
        int fl = true;
        for (int j = 2;j * j <= i;j++) if (i % j == 0) { fl = false; break; }
        if (fl) primes.push_back(i);
    }
    for (auto& x : primes) cout << x << " "; cout << endl;
    return;
}


//Sieve Of Eratosthenes....................
void Best(int n) {
    vector<bool>v(n, true);
    vector<int>primes;
    primes.push_back(2);
    for (int i = 2 * 2;i <= n;i += 2) v[i] = false;
    for (int i = 3;i < n;i += 1) {
        if (v[i]) {
            primes.push_back(i);
            for (int j = i * i;j <= n;j += i) v[j] = false;
        }
    }
    for (auto& x : primes) cout << x << " "; cout << endl;
    return;
}

void solve() {
    int n;cin >> n;
    Normal(n); //T.O=O(n^2) 
    Good(n);   //T.O=O(nsqrt(n)) 
    Best(n);   //T.O=O(n*log(logn)) 
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cout << std::fixed << std::setprecision(25);
    cerr << std::fixed << std::setprecision(10);
    clock_t z = clock();
    int T = 1;
    // cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    cerr << "Time : " << 1000 * ((double)clock() - z) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}