#include<bits/stdc++.h>
using namespace std;

int main() {

        // To check if the kth bit is set or not.
        int x = 5; // 101
        int k = 2; // We have to check if this position bit is set or not.

    if(x & (1 << (k-1))) cout<<"Set is present";
    else cout<<"Set is not Present";

    return 0;
}