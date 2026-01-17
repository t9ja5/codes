/*

1
22
333
4444
55555


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r=0 ; r<n ; r++){
        for(int c=0 ; c<=r ; c++){
            cout<<(r+1);           // as our indexis from zero but we want from one so j+1 will make it from 1
        }
        cout<<"\n";
    }
    
}
