#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int main() {

string s  = "abcd";
string str = "cdba";

s = s.append(s);

size_t found = s.find(str);

if(found != string::npos) {
    cout<<"Yes";
}
else cout<<"No";

return 0;
}
