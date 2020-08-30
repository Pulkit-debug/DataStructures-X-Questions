#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int sumX(int a[], int n, int x) {

unordered_set<int> us;

int temp = 0;
for(int i = 0;i<n;i++) {
    temp = x- a[i];
    if(us.find(temp) != us.end()) return true;
    us.insert(a[i]);
}

return false;
}

int main() {

int a[] = {3, 5, 2, 8, 10, 7};

int n = sizeof(a)/sizeof(a[0]);
int x = 16;
if(sumX(a, n, x)) cout<<"Present";
else cout<<"Not Presetn";

return 0;
}
