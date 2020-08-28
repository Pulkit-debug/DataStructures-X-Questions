#include<bits/stdc++.h>
using namespace std;

int setbits(int n) {
    // We can solve this problem very efficiently by using Brian Kanighan Algorithm.
    // TC would be O(1)
    // In this algorithm we remove the right most bit one by one till we get all 0's

    int count = 0;
    while(n > 0) {

        n = (n & (n-1));
        count++;
    }
    return count;

}

int main() {
    // We have to count the number of set bits present in a decimal number;

    int n = 97; // 101
    cout<<setbits(n);
}