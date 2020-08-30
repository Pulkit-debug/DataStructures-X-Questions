#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int binary(int a[], int n) {

for(int i = 0;i<n;i++) {
    if(a[i] == 0) a[i] = -1;
}

// Now easily we can find the part where the subarray sum is equal to zero
int prefix_sum = 0;

unordered_set<int> us;

for(int i = 0;i<n;i++) {
prefix_sum += a[i];

}

}

int main() {
// Given an binary Array we have to find the length largest subarray that contains equal no. of 0's and 1's 
int a[] = {1, 0, 0, 1, 1, 0};

int n = sizeof(a)/sizeof(a[0]);

binary(a, n);
return 0;
}
