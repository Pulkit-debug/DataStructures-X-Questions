#include<bits/stdc++.h>
using namespace std;

void stock(int a[], int n) {

int buy = 0;
bool lmin = false;
// bool lmax = false;
int sell = 0;

int buyarr[n];
int sellarr[n];
for(int i = 0;i<n;i++) {
    buyarr[i] = -1;
    sellarr[i] = -1;
}

int bj = 0;
int sj = 0;

for(int i = 0;i<n;i++) {
if(i == 0) {
    if(a[i] < a[i+1]) {
        // buy = a[i];
        buyarr[bj++] = i;
        lmin = true;
    }
    
    continue;
}

if(i == n-1) {
    if(lmin == true) {
        if(a[i] > a[i-1]) {
            sell += a[i] - buy;
            sellarr[sj++] = i;
            
            lmin = false;
            
        }
    }
    continue;
}

if(lmin == true) {
        if(a[i] > a[i+1] && a[i] > a[i-1]) {
            // lmax = true;
            // sell += a[i] - buy; 
            lmin = false;
            sellarr[sj++] = i;
            
        }
        continue;
    }

if(a[i] < a[i-1] && a[i] < a[i+1]) {
    lmin = true;
    // buy = a[i];
    buyarr[bj++] = i;
    // cout<<"coming";
    continue;
}
}

for(int i = 0;i<n;i++) {
    if(buyarr[i] != -1 && sellarr[i] != -1) {
        cout<<"("<<buyarr[i]<<" "<<sellarr[i]<<")"<<" ";
    }
}
return;

}

int main() {
    // This questiuon is about to buy and sell stocks. Buy the sell when the price is low and sell the stock when the price is high to make the profit.
    int t, n, a[n];
    
    cin>>t;
    while(t--) {
    
    cin>>n;

    for(int i = 0;i<n;i++) {
        cin>>a[i];
    }
    
    stock(a, n);
    cout<<endl;
    }
    
}