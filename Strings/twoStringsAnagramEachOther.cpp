#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int main() {

string s = "gfg";
string str = "ggf";

int count[256];
// T.C -> O(n) and space compl O(1);

for(int i = 0;i<256;i++) {
    count[i] = 0;
}
for(int i = 0;i<s.length();i++) {
count[s[i]]++;
}
for(int i = 0;i<str.length();i++) {
    count[str[i]]--;
}
bool flag = true;

for(int i = 0;i<256;i++) {
    if(count[i] != 0) flag = false;

}
if(flag) cout<<"Same";
else cout<<"not Same";

return 0;
}
