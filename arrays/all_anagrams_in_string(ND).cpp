#include<bits/stdc++.h>
using namespace std;

void anagram(string s, string p) {
    int k = p.length();
    // sort(p.begin(), p.end());
    string temp = "";
    // int startIndex[s.length()];
    vector<int> v;
    // int n = sizeof(startIndex)/sizeof(startIndex[0]);
    int j = 0;
    for(int i = 0;i<s.length();i++) {
        if(i < k) {
            temp += s[i];
            sort(temp.begin(), temp.end());
         if(temp == p) {
            // startIndex[j++] = i-k+1;
            v.push_back(i-k+1);
            }
            continue;
        }
        
           
        else {
              temp.erase(temp.begin()+(i-k));
              temp += s[i];
              sort(temp.begin(), temp.end());
              if(temp == p) {
                //   startIndex[j++] = i-k+1;
                v.push_back(i-k+1);
              }
            // temp -= s[k-i];
        }

    }

     for (auto& it : v) { 
  
        cout << it << ' '; 
    } 
}

int main() {
    // This is to find the starting index of all anagrams in a string.
    // Another Question Also not done: Minimum Window Substring

    string s = "abab";
    string p = "ab";

    anagram(s, p);
    return 0;
}