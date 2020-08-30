#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);

void mostf(int a[], int n) {

    int temp[n];
    int j = 0;

    unordered_map<int, int> umap;
    unordered_map<int, int> :: iterator it;
    for(int i = 0;i<n;i++) {
        umap[a[i]]++;
    }
    // Particular statement is for printing the HashTable
    // for(auto x : umap) {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    int max = 0;
    for(it = umap.begin(); it != umap.end();it++) {
        if((*it).second > max) {
            max = (*it).first;
        }
    }

    cout<<max;

}

int main() {
 // We have to find the most frequent element in the array
 int a[] = {5, 6, 8, 3, 6, 8, 5, 6, 6};

int n = sizeof(a)/sizeof(a[0]);

mostf(a, n);

return 0;
}
