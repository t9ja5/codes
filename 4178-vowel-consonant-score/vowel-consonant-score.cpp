#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int vowelConsonantScore(string s) {
        int cons,vow=0;
        if (s.length()==0){
            return 0;
        }
        for( char c : s){
            if(isalpha(static_cast<unsigned char>(c))){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vow++;
            }
                else cons++;
            }
        }
        if(cons==0) return 0;
        int score = floor(vow/cons);
        return score;
    }
};