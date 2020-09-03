#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int binary(int a[], int n) {

for(int i = 0;i<n;i++) {
    if(a[i] == 0) a[i] = -1;
}

unordered_map<int, int> um;

int sum = 0;
int maxLen = 0;
int umValue = 0;
for(int i = 0;i<n;i++) {
    if(a[i] == -1) {
        sum += -1;
    }
    else {
        sum += 1;
    }

  
    if(um.find(sum) != um.end()) {
        maxLen = max(maxLen, i-um[sum]);
    }
    else {
        um.insert({sum, i});
    }

}
return maxLen;
}

int main() {
// Given an binary Array we have to find the length largest subarray that contains equal no. of 0's and 1's 
int a[] = {1, 0, 0, 1, 1, 0};

int n = sizeof(a)/sizeof(a[0]);

cout<<binary(a, n);
return 0;
}
