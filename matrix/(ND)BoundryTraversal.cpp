#include<bits/stdc++.h>
using namespace std;

const int r = 3;
const int c = 3;

void boundry(int a[][c]) {

for(int i = 0;i<r;i++) {
    for(int j = 0;j<c;j++) {
        cout<<a[i][j]<<" ";
        if(j == c-1) {
            break;
        }
    }
    continue;
}

}

int main() 
{
    // We are given a matrix we need to print the boundry elements
  
    int a[][c] = {
        {10, 20, 30},
        {15, 25, 80},
        {30, 90, 100}
    };
    
    boundry(a);

    return 0;
}