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
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int indexL = 0;
    int indexS = -1;
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1;i < n;i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            secondLargest = largest;
            indexS = indexL;
            indexL = i;
        }
        else if (arr[i] < largest) {
            if (arr[i] > secondLargest) { secondLargest = arr[i]; indexS = i; }
        }
    }
    cout << indexS << endl;
    return 0;
}