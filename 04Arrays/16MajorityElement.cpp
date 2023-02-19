#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums) {
    if (nums.size() < 2) { cout << nums[0]; return; }
    int ans;
    unordered_map<int, int>m;
    for (int i = 0;i < nums.size();i++) {
        m[nums[i]]++;
        if (m[nums[i]] > nums.size() / 2) {
            ans = nums[i];
        }
    }
    cout << ans;
    return;
}


int main() {
    int t; cin >> t;
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