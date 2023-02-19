/* <---------------------------------  KADAN'S ALGORITHM -------------------------------> */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0;i < n;i++) {
        sum += v[i];
        if (sum < v[i]) {
            sum = v[i];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}