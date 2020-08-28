#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool sumX(ll a[], ll x, ll n) {
    
    ll i = 0;
    ll j = n-1;
    
    sort(a, a+n);
    
    while(i < j) {
        if(a[i] + a[j] == x) return true;
        else if(a[i] + a[j] > x) j--;
        else i++;
    }
    
    return false;
    
}


int main() {
    
    ll t;
    cin>>t;
    while(t--) {
        ll n, x;
        cin>>n>>x;
        ll a[n];
        for(ll i = 0;i<n;i++) cin>>a[i];
        
    
    if(sumX(a, x, n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;    
    }
    
    return 0;
}