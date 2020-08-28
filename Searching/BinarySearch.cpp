#include<bits/stdc++.h>
using namespace std;


bool binarySearch(int a[], int low, int high, int x) {
    int mid = (low + high) / 2;

    if(low > high) return false;

    if(a[mid] == x) return true;

    if(a[mid] > x) {
        binarySearch(a, low, mid-1, x);
    }
    else {
        binarySearch(a, mid+1, high, x);
    }
    
}


int main() {

    // Implementing Binary Search using recursion.

    int a[] = {1, 10, 20, 30, 40, 50, 60, 70};
    int low = 0;
    int high = sizeof(a)/sizeof(a[0]) - 1;
    int x = 10;

    if(binarySearch(a, low, high, x)) cout<<"Present";
    else cout<<"Not Present";
    return 0;
}