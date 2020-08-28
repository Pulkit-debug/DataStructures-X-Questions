#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


ll twoSum(ll a[], ll start, ll n, ll x) {

ll i = start;
ll j = n;

while(i < j) {
    if(a[i] + a[j] == x) return true;
    else if(a[i] + a[j] > x) j--;
    else i++;
}
return false;

}


ll triplet(ll a[], ll x, ll n) {
ll temp = 0;
for(int i = 0;i<n;i++) {
    if(twoSum(a, i+1, n, x-a[i])) return true;;
}
return false;
}


int main() {

    ll a[] = {2, 3, 4, 8, 9, 20, 40};
    ll x = 11;
    ll n = sizeof(a)/sizeof(a[0]) - 1;

    if(triplet(a, x, n)) cout<<"Present";
    else cout<<"Not Present";

    return 0;
}