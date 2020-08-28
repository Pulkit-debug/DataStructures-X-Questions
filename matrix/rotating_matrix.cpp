#include<bits/stdc++.h>
using namespace std;

const int r = 3;
const int c = 3;

int rotateClockWise(int a[r][c]) {

for(int i = 0;i<r;i++) {
    for(int j = i+1;j<c;j++) {
        swap(a[i][j], a[j][i]);
    }
}

for(int i = 0;i<r;i++) {
    for(int j = 0;j<(c/2);j++) {
        swap(a[i][j], a[i][r-1-j]); 
    }
}

for(int i = 0;i<r;i++) {
    for(int j = 0;j<c;j++) {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}

int main() {
    // Rotate the matrxi by 90 degre counter clock wise
    int a[r][c] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

rotateClockWise(a);
    

    return 0;
}
