#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
int maxProfit(vector<int>& prices) {
    int ans = 0;
    if (prices.size() == 1) return 0;
    int mine = prices[0];
    for (int i = 0;i < prices.size();i++) {
        if (prices[i] < mine) {
            mine = prices[i];
        }
        if (prices[i] > mine) {
            ans += prices[i] - mine;
            mine = prices[i];
        }
    }
    return ans;
}


int main() {
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << maxProfit(v);
    return 0;
}