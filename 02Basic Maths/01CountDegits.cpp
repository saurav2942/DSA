#include<bits/stdc++.h>
using namespace std;
#define ll long long int

//O(n) Solution
int itterativeApproch(ll n) {
    int cnt = 0;
    while (n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

// TC: O(n) And SC: O(digits) Solution
int recursiveApproch(ll n) {
    while (n == 0) {
        return 0;
    }
    return 1 + recursiveApproch(n / 10);
}

// O(1) Solution
int logarithmicApproch(ll n) {
    return floor(log10(n) + 1);
}

int main() {
    ll n;
    cin >> n;
    cout << itterativeApproch(n) << endl;
    cout << recursiveApproch(n) << endl;
    cout << logarithmicApproch(n) << endl;
    return 0;
}