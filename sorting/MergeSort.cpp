#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);

int merge(int a[], int low, int high, int n) {

}
 
int mergeSort(int a[], int low, int high, int n) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid, n);
        mergeSort(a, mid+1, high, n);
        merge(a, low, high, n);
    }
}

int main() {
 
int a[] = {20, 10, 5, 15};

int n = sizeof(a)/sizeof(a[0]);

int low = 0;
int high = n -1;

mergeSort(a, low, high, n);

return 0;
}
