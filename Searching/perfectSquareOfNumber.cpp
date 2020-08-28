#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll pSquare(ll n) {

    if(n == 0 || n == 1) return n;

    ll low = 1;
    ll high = n;

    
    while(low <= high) {
        ll mid = (low + high) / 2;
        if(mid*mid == n) return floor(mid);

        if(mid*mid < n) {
            low = mid + 1;
        }
        else high = mid-1;
    }


}

int main() {

    ll n = 10;
    cout<<pSquare(n);
    return 0;
}