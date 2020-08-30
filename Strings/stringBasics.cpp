#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int main() {

string s = "The name is verma ji bole verma";
string str = "verma";

size_t found = s.find(str);
if(found != string::npos) cout<<"Present at "<<found<<endl;

found = s.find(str, found+1) ;
if(found != string::npos) cout<<"Present at "<<found<<endl;

string check = s.substr(4, 6);
cout<<check;

return 0;
}
