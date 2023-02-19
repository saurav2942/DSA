#include<bits/stdc++.h>
using namespace std;


//Time - O(n^3) if(let Making Of TT Is In Constant Time....)
void solve(vector<int>& v, vector<int>& ans, int k = 0) {
    if (v.size() == 0) {
        for (int i = 0;i < ans.size();i++) cout << ans[i] << " "; cout << "\n";
        return;
    }
    for (int i = 0;i < v.size();i++) {
        vector<int>tt;
        for (int j = 0;j < i;j++) tt.push_back(v[j]);
        for (int j = i + 1;j < v.size();j++) tt.push_back(v[j]);
        ans[k] = v[i];
        solve(tt, ans, k + 1);
    }
    return;
}

//Time O(n!)
void solve2(vector<int> v, int i = 0) {
    if (i == v.size()) {
        for (auto x : v) cout << x << " "; cout << "\n";
        return;
    }
    for (int j = i;j < v.size();j++) {
        swap(v[i], v[j]);
        solve2(v, i + 1);
        swap(v[i], v[j]);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v, ans(n, 0);
        for (int i = 0;i < n;i++) {
            int a; cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        // solve(v, ans);
        solve2(v);
    }
    return 0;
}

/*
Input -
2
3
1 2 3
4
1 2 3 4

Output -
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1
*/