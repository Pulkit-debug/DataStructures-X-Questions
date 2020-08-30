#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);

void dis(int a[], int n) {

    unordered_set<int> us ;

    for(int i = 0;i<n;i++) {
        us.insert(a[i]);
    }

    unordered_set<int> :: iterator it;

    for(it = us.begin();it != us.end();it++) {
        cout<<*it<<" ";
    }

}
 
int main() {

int a[] = {1, 5, 2, 3, 1, 2};

int n = sizeof(a)/sizeof(a[0]);


dis(a, n);

return 0;
}
