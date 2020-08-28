#include<bits/stdc++.h>
using namespace std;

bool eq(int a[], int n) {

int sum = 0;
int l_sum = 0;
for(int i = 0;i<n;i++) {
    sum += a[i];
}

for(int i = 0;i<n;i++) {
    if(l_sum == sum-a[i]) {
        return true;
    }
    l_sum += a[i];
    sum -= a[i];
}
return false;

}


int main() {

    int a[] = {3, 4, 8, -9, 20, 6};
    int n = sizeof(a)/sizeof(a[0]);
    if(eq(a, n)) cout<<"Yes";
    else cout<<"No";
    return 0;
}