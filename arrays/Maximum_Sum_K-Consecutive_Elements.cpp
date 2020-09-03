#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[], int n, int k) {

int cursum = 0;
int maxsum = 0;
for(int i = 0;i<n;i++) {
    if(i < k) {
        cursum += a[i];
        if(cursum > maxsum) {
            maxsum = cursum;
        }
        continue;
    }
    else {
        // Here the window starts moving
        cursum += a[i];
        cursum -= a[i - k];
        if(cursum > maxsum) {
            maxsum = cursum;
        }

    }

}

return maxsum;

}

int main() {

    // Find the maximum Sum of k consequetive elements in the array.

    int a[] = {100, 200, 300, 400};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    cout<<maxsum(a, n, k);

    return 0;
}