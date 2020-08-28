#include<bits/stdc++.h>
using namespace std;
const int r = 3;
const int c = 3;
bool findElement(int a[r][c], int element) {

for(int i = 0;i<r;i++) {
    for(int j = c-1;j>=0;j--) {
        if(element == a[i][j]) {
            return true;
        }
        if(element > a[i][j]) {
            break;
        }
        if(element < a[i][j]) {
            continue;
        }
    }
    continue;
}
return false;

}

int main() {

    int a[][c] = {
        {10, 20, 30},
        {15, 25, 80},
        {30, 90, 100}
    };

    int element = 35;
    if(findElement(a, element)) cout<<"Present";
    else cout<<"Not Present";
    return 0;
}