#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fo(i, n) for(int i = 0;i<n;i++);
 
int anaSearch(string s, string str, int strSum) {

    // Here we use count ascii with sliding window 
    int windowSize = str.length();
    int windowSum = 0;
    for(int i = 0;i<s.length();i++) {
        if(i < windowSize) {
            windowSum += (int)s[i];
        
        if(windowSum == strSum) {
            return true;
        }

        }
        else {
            windowSum += (int)s[i];
            windowSum -= (int) s[i-windowSize];
            if(windowSum == strSum) {
                return true;
            }
        }

    }
    return false;


}

int main() {
 
// Given a String, check whether permutation of second string is present in first string.

string s = "girdhari";
string str = "ada";

int strSum = 0;
for(int i = 0;i<str.length();i++) {
    strSum += (int)str[i];
}
if(anaSearch(s, str, strSum)) cout<<"Present";
else cout<<"Not Present";
return 0;
}
