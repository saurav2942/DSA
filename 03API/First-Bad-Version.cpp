#include<bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    long long int ans;
    long long int i = 1, j = n;
    if (!isBadVersion(n)) return -1;
    while (i <= j) {
        long long int mid = (i + j) / 2;
        if (isBadVersion(mid)) {
            ans = mid;
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    return ans;
}