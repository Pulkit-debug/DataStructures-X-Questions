#include<bits/stdc++.h>
using namespace std;

// #define long long long long;

long long binarySearch(long long a[], long long low, long long high, long long x) {
    long long mid = (low + high) / 2;

    if(low > high) return -1;

    if(a[mid] == x) return mid;

    if(a[mid] > x) {
        return binarySearch(a, low, mid-1, x);
    }
    
    return binarySearch(a, mid+1, high, x);
    
    
}

long long findPivot(long long a[], long long low, long long high, long long x) {

long long mid = (low + high) / 2;

if(low > high) return -1;
if(low == high) return low;


if(a[mid] > a[mid+1] && mid < high) {
    return mid;
}

if(a[mid] < a[mid-1] && mid > low) {
    return mid-1;
}

if(a[mid] <= a[low]) {
    return findPivot(a, low, mid-1, x);
}

return findPivot(a, mid+1, high, x);

}

long long sortedAndRotated(long long a[], long long low, long long high, long long x) {

    long long pivot = findPivot(a, low, high, x);

    if(pivot == -1) {
        // This means the array is not rotated
        return binarySearch(a, low, high, x);
    }

    if(a[pivot] == x) return pivot;

    if(a[0] <= x) return binarySearch(a, low, pivot-1, x);
    return binarySearch(a, pivot+1, high, x);

}


int main() {

    // Given a sorted and rotated array of distinct elements, and an element x, find if x is present in the array or not.

    long long a[] = {10, 20, 40, 5, 6, 7, 8};

    long long n = sizeof(a)/sizeof(a[0]);
    long long x = 7;
    long long low = 0;
    long long high = n-1;
    cout<<sortedAndRotated(a, low, high, x);
    return 0;
}