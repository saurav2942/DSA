/*
Put N Items With Given Weight And Value in a  Knapsnack of capcity W to get the maximum total value in the knapsnack
Hint - Name of the problem is the hint either take it or not, Like binary ) and 1.

ALL METHODS TO SOLVE THIS QN - https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
                               https://www.hackerearth.com/problem/algorithm/01-knapsack-problem-5a88b815/
                               https://leetcode.com/problems/partition-equal-subset-sum/description/
                               https://leetcode.com/problems/ones-and-zeroes/
                               https://www.codechef.com/problems/KNPSK
*/

/*
I/P - n =     3, W = 50
      i =     0,   1,  2
      value = 100, 50, 150
      Wt. =   10,  20, 30
O/P - 250
*/
#include <bits/stdc++.h>
using namespace std;


// Time Complexity - O(2^n)
int Knapsack1(int n, int w, vector<int>& wt, vector<int>& val) {
    if (n == 0 || w <= 0) return 0;
    if (wt[n - 1] > w) return Knapsack1(n - 1, w, wt, val);
    return max(Knapsack1(n - 1, w, wt, val), Knapsack1(n - 1, w - wt[n - 1], wt, val) + val[n - 1]);
}

/*Dynamic Programming Solution*/
int Knapsack2(int n, int w, vector<int>& wt, vector<int>& val) {}

void solve() {
    int n, w; cin >> n >> w;
    vector<int> wt, val;
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        val.push_back(a);
    }
    for (int i = 0;i < n;i++) {
        int a; cin >> a;
        wt.push_back(a);
    }
    cout << Knapsack1(n, w, wt, val) << " ";
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}