#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int compare(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second == p2.second) {
        return p1.first > p2.first;
    }

    return p1.second > p2.second;

}

void occur(int a[], int n, int k) {

unordered_map<int, int> map;
for(int i = 0;i<n;i++) {
    map[a[i]]++;    
}

// Creating a vector pari to sort the map by values
vector<pair<int, int>> pv(map.begin(), map.end());

// Sorting the vector of pari based on value 

sort(pv.begin(), pv.end(), compare); 

for(int i = 0;i<k;i++) {
    cout<<pv[i].first<<" ";
}

}

int main() {

//Find k numbers with most occurrences in the given array


int a[] = {3, 1, 4, 4, 4, 5, 2, 6, 1};
int n = sizeof(a)/sizeof(a[0]);

int k = 2;

occur(a, n, k);

return 0;
}
