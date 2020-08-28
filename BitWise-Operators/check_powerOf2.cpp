#include<bits/stdc++.h>
using namespace std;

void power(int n) {

if(n != 0 && !(n & (n-1))) cout<<"Yes it is.";
else cout<<"No";

}

int main() {
    int n = 16;
    power(n);
    return 0;
}