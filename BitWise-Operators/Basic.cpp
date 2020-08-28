#include<bits/stdc++.h>
using namespace std;

void convertBinary(int n) {
   vector<int> v;

   while(n > 0) {
       v.push_back(n % 2);
       n = n / 2;

   }
    for (auto& it : v) { 
        cout << it; 
    } 
}

int main() {

    // Representing Signed Integers(-ve ones) 
    // We can represent signed integers using 2's compliment for given no. of bits
    
    int x = -3;
    // And suppose we have to convert the integer into binary form using only 3 bits
    // just put the bits no. in power of 2 and then subtract it from the integer given.
    int res = pow(2, 3) - abs(x);
    cout<<res<<endl;
    convertBinary(res);
    return 0;
}