#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int subX(int a[], int n, int x) {

    int prefix_sum = 0;

    unordered_set<int> us ;
    for(int i = 0;i<n;i++) {
        prefix_sum += a[i];
        if(us.find(prefix_sum-x) != us.end()) return true;

        us.insert(prefix_sum);
    }
    return false;

}

int main() {

// Given an array and a sum we need to find if there is a subarray present in the array with sum equal to X;
int a[] = {5, 3, 8, -2, 8, 10};

int n = sizeof(a)/sizeof(a[0]);
int x = 11;
if(subX(a, n, x)) cout<<"yes";
else cout<<"No";
return 0;
}
