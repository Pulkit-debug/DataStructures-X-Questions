#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int low, int high, int x) {
    int mid = (low + high) / 2;

    if(low > high) return -1;

    if(a[mid] == x) return mid;

    if(a[mid] > x) {
        binarySearch(a, low, mid-1, x);
    }
    else {
        binarySearch(a, mid+1, high, x);
    }
    
}

int infiniteArray(int a[], int x) {

    if(a[0] == x) return 0;

    int i = 1;
    while(a[i] < x) {
        i = i * 2;
    }

    if(a[i] == x) return i;
    else  return binarySearch(a, i/2, i, x);

}

int main() {
    // given an infinite sorted array and an element x we need to find if x is present in the array or not.

    int a[] = {1, 8, 20, 40, 80, 90, 100, 120, 140};

    int x = 100;
    
    cout<<infiniteArray(a, x);

    return 0;
}