/* <---------------------------------  KADAN'S ALGORITHM  -------------------------------> */
/* VERY IMPOSTANT QUSTION */
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& v) {
    int maxs = INT_MIN;
    int sum = 0;
    int ts = 0;
    for (int i = 0;i < v.size();i++) {
        ts += v[i];
        sum = max(v[i], sum + v[i]);
        maxs = max(maxs, sum);
        v[i] = -v[i]; // inverted array 
    }
    // cornor case when all array elements are negative then only maxS will be negative thenthe maxS=(smallest Possible Number) and minS=TotalSum then we need to return maxS not going Further
    if (maxs < 0) {
        // But if all numbers are +ive then maxS=TotalSum and minSum=a paricular minimum element but here circular sum will be less then maxS always so at last we will get right answer
        cout << maxs << " ";
        return;
    }
    sum = 0;
    int maxi = INT_MIN;
    // finding maximum sum subarray in inverted array which will be the minimum sum sub array in actual array
    // and remaining element will form the max sum circular subarray
    for (int i = 0;i < v.size();i++) {
        sum = max(v[i], sum + v[i]);
        maxi = max(maxi, sum);
    }
    // maxCircularSubAraaySum=totalSum - MinSubArraySum
    int circular_max_sum = ts + maxi; // added bcoz due to inversion sign change
    int ans = max(maxs, circular_max_sum);
    cout << ans;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>v;
        for (int i = 0;i < n;i++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        solve(v);
        cout << endl;
    }
    return 0;
}