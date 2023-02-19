#include<bits/stdc++.h>
using namespace std;

int main() {
    //Left Shift Operator '<<'  if (x<<y) Gives -> x*2^y;
    int a = 6 << 2; // (110<<2) ->(11000)
    cout << a << " ";
    //Right Shift Operator '>>' if (x>>y) Gives -> floor(x/2^y);
    a = 6 >> 2; // (110>>2) ->(001)
    cout << a;
    return 0;
}

// Output -> 24 1