#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
vector<int> pattern(string s, string str, int len) {

    size_t found = s.find(str);
    string temp = "";

    vector<int> v;
    for(int i = 0;i<s.length();i++) {
        if(i < len)  {
            temp += s[i];
            // found = temp.find(str);
            if(temp == str) {
                v.push_back(i-temp.length()+1);
            }
        }
        else {
            temp.erase(temp.begin()+(i-temp.length()));
            temp += s[i];
            // found = temp.find(str);
            if(temp == str) {
                v.push_back(i-temp.length()+1);
            }
        }
    }

    return v;

}

int main() {

string s = "aabcbaccbabcbac";
string str = "abc";

vector<int> res = pattern(s, str, str.length());

for(auto& it : res) {
    cout<<it<<" ";
}

return 0;
}
