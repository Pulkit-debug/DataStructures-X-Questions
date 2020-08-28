#include<bits/stdc++.h>
using namespace std;

// int index = 0;

int leftMostIndex(int a[], int low, int high, int x) {

int mid = (low + high) / 2;

if(low > high) return -1;

if(a[mid] == x && (mid == 0 || a[mid-1] != x)) {
    return mid;
}

if(a[mid] >= x) {
    leftMostIndex(a, low, mid-1, x);
}

else {
    leftMostIndex(a, mid+1, high, x);
}

}



int main() {
    // Given an sorted array with repitiion, find left most index of the element.
    int a[] = {2, 3, 3, 3, 3};
    int low = 0;
    int high = sizeof(a)/sizeof(a[0]) - 1;
    int x = 3;
    cout<<leftMostIndex(a, low, high, x);

    return 0;
}