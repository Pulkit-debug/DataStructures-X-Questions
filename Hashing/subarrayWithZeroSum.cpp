#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
bool sub(int a[], int n) {

    int prefix_sum = 0;

    unordered_set<int> us;
    
    for(int i = 0;i<n;i++) {
        prefix_sum += a[i];
        if(prefix_sum == 0 || us.find(prefix_sum) != us.end()) {
            return true;
        }
        us.insert(prefix_sum);
    }
    return false;
}

int main() {
// We need to find a subaaray in an array whose sum is o;

int a[] = {5, 6, -4, -2, 8, 10};
int n = sizeof(a)/sizeof(a[0]);

if(sub(a, n)) cout<<"Yes";
else cout<<"No";
return 0;
}
