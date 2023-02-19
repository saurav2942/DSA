#include <bits/stdc++.h>
using namespace std;

#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int

int main() {
    FASTIO;
    int n;
    cin >> n;
    int arr[n];
    int maxe = INT_MIN;
    int index = -1;
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        //maxe=max(maxe, arr[i]);
    }
    for (int i = 0;i < n;i++) {
        if (maxe < arr[i]) {
            maxe = arr[i];
            index = i;
        }
    }
    cout << index << endl;
    return 0;
}