#include<bits/stdc++.h>
using namespace std;

int leftOccur(int a[], int low, int high, int x, int n) {

int mid = (low + high) / 2;

if(low > high) return -1;

if(a[mid] == x && (mid == 0 || a[mid-1] != x)) return mid;

if(a[mid] >= x) {
    leftOccur(a, low, mid-1, x, n);
}

else {
    leftOccur(a, mid+1, high, x, n);
}

}

int rightOccur(int a[], int low, int high, int x, int n) {
int mid = (low + high) / 2;


if(low > high) return -1;

if(a[mid] == x && (mid == high || a[mid+1] != x)) return mid;

if(a[mid] <= x) {
    rightOccur(a, mid+1, high, x, n);
}

else {
    rightOccur(a, low, mid-1, x, n);
}

}



int noOfOccur(int a[], int low, int high, int x, int n) {

    // Given an sorted array with repitition, find the no. of occurances of an element

// int mid = (low + high) / 2;

int left = leftOccur(a, low, high, x, n);
int right = rightOccur(a, low, high, x, n);

cout<<left<<endl;
cout<<right<<endl;

return (right - left + 1);

}


int main() {
    // Given an sorted array with repitiion, find left most index of the element.
    int a[] = {2, 3, 3, 5, 6};
    int low = 0;
    int high = sizeof(a)/sizeof(a[0]) - 1;
    int x = 3;
    int n = high - 1;
    // cout<<leftMostIndex(a, low, high, x);
    cout<<noOfOccur(a, low, high, x, n);

    return 0;
}