/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}


void solve() {
    string integerPart, fractionPart;
    cin >> integerPart >> fractionPart;
    long long int n = 0;
    long long int d = 0;
    for (auto& x : integerPart) n = n * 10 + (x - '0');
    long long int k = 0;
    for (int i = fractionPart.length() - 1;i >= 0;i--) {
        if (fractionPart[i] == '0') k++;
        else break;
    }
    k = fractionPart.length() - k;
    d = k;
    for (int i = 0;i < k;i++) n = n * 10 + (fractionPart[i] - '0');
    k = d;
    d = pow(10, k);
    if (k % 2 == 0) d += 1;
    k = gcd(n, d);
    n /= k;
    d /= k;
    cout << n << "/" << d;
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}