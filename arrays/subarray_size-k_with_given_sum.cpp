#include<bits/stdc++.h>
using namespace std;

bool subarrsum(int a[], int n, int k, int sum) {

int cursum = 0;
bool flag = false;

for(int i = 0;i<n;i++) {
    if(i < k) {
        cursum += a[i];
        continue;
    }
    if(cursum == sum) {
            flag = true;
            break;
        }
    else {
        cursum += a[i];
        cursum -= a[i-k];
        if(cursum == sum) {
            flag = true;
            break;
        }
    }
}

return flag;

}

int main() {
    // In this particular program we have to find the subarray of size k with given sum.

    int a[] = {4, 6, 3, 23, 64, 23};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 2;
    int sum = 9;
    if(subarrsum(a, n, k, sum)) cout<<"Yes";
    else cout<<"No";

return 0;
}