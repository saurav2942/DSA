/*
ALL METHODS TO SOLVE THIS QN -
*/

#include <bits/stdc++.h>
using namespace std;

void print_1_to_N(int n) {
    if (n == 0) return;
    print_1_to_N(n - 1);
    cout << n << " ";
}


//    TAIL RECURSION FASTER THAN OTHER RECURSION 
//                      AND 
//    THE FUNCTION CALLED RECURSION FUNCTION
void print_N_to_1(int n) {
    if (n == 0) return;
    cout << n << " ";
    print_N_to_1(n - 1);
}
// HOW COMPILER WAS DOING THINGS INTERNALLY WHICH IS CALLED TAIL ELIMINATIONS BY USING LABELS
// void print_N_to_1(int n) {
//   start: 
//     if (n == 0) return;
//     cout << n << " ";
//     n=n-1;
//   go to start:
// }
//   THAT IS WHY THIS IS FASTER THAN OTHERS EXAMPLE :- "QUICK SORT FASTER THAN MERGE SORT"


void solve() {
    int n; cin >> n;
    print_1_to_N(n);
    cout << endl;
    print_N_to_1(n);
    return;
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        solve(); cout << endl;
    }
    return 0;
}