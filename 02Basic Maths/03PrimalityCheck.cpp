/*
1)  By runnig a looop and counting the divisors in -> O(n)
    Optimized -> run loop till i<sqrt(n) or i*i<nand at end check if n is squre number or not -> O(sqrt(n))
    if number of divisors>0(excluding 1 & n) than n is a prime number else non prime...

2)

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    vector<int>f;
    int i;
    for (i = 2; i * i < n; i++) {
        if (n % i == 0) {
            f.push_back(i);
            f.push_back(n / i);
            cnt += 2;
        }
    }
    if (i * i == n) {
        cnt++;
        f.push_back(i);
    }
    cout << cnt << endl;
    for (auto x : f) cout << x << " ";
    return 0;
}
