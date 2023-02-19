#include<bits/stdc++.h>
using namespace std;

int main() {
    // (5) -> (101)
    int a = 5;  // Normal Int Is and Signed int are the same things...
    cout << (~a) << "\n";
    unsigned int b = 5;
    cout << (~b) << "\n";
    cout << printf("%f", pow(2, 32) - 5) << "\n";
    signed int c = -6;  // Works same as the first one..
    cout << (~c) << " ";
    return 0;
}

/*
The Difference here is due to Sign Bit In Unsigned Int There is no sign bit...
But in signed integer there is the the sign bit which is the leading bit if it is 0 -> Positive Int, 1 -> Negative Int
Due To Not Operator the sign bit of a signed integer changes if (1 <-> 0)
To Get the answer we need to do some maths here ->

If Signed Integer ->
range -> (-2^31 to 2^31-1)
to get the answere here just subtract the value  like int this case
a=5
answer would be (2^31-1)-(2^31+5)=-6 mean increase the value by one if INT>0 and sign it as negative...
c=-6
answer would be (2^31-1)-(2^31-6)=5 mean increase the value by one if INT<0 and sign it as Positive....

If Unsigned Integer ->
b=5;
answer ->   2^32-5=4294967290

*/