#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i=0 ; i<t.length(); i++){
            tmap[t[i]]++;
        }
        for(int i=0 ; i<s.length(); i++){
            smap[s[i]]++;
        }
        for(auto x : t){
            if(smap[x]!=tmap[x]  || smap.find(x)==0){
                return x;
            }
        }
        return '\0';
    }
};