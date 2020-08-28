#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;

vector<ll> peak(ll a[], ll low, ll high, ll n) {

    ll mid = (low + high) / 2;

    if(low > high) return v;

    if(low == high) return v;

    if((mid == 0 || a[mid] > a[mid-1] ) && (mid = n-1 || a[mid] > a[mid+1]))
        v.push_back(a[mid]);

    if(mid > 0 && a[mid-1] > a[mid]) 
        return peak(a, low, mid-1, n);

    return peak(a, mid+1, high, n);
}

int main() {
    // In this we have to find the numbers whose peak elements are not greater.
    // Peak Problem.
    ll a[] = {10, 2, 3, 5, 2, 90, 67};

    ll low = 0;
    ll high = sizeof(a)/sizeof(a[0]) - 1;
    ll n = high + 1;
    vector<ll> check = peak(a, low, high, n);

    for (auto& it : check) { 
  
        cout << it << ' '; 
    } 

    return 0;
}