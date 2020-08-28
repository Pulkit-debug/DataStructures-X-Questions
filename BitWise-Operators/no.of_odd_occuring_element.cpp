#include<bits/stdc++.h>
using namespace std;

int oneodd(int a[], int n) {

    // Doing xor of all the elements of the array
    int res = 0;
    for(int i = 0;i<n;i++) {
        res = res ^ a[i];
    }
    return res;
}

int twoodd(int a[], int n) {

}

// tc -> O(n) for the worst case when the element is present at the last
int main() {
// Given an array that contains all elements even no. of times except one element. Find the odd occuring element.

int a[] = {3, 3, 3, 4, 5, 4, 5, 6};
int n = sizeof(a)/sizeof(a[0]);
cout<<oneodd(a, n);
// cout<<twoodd(a, n);

return 0;
}
