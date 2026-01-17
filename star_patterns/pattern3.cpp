/*

1
12
123
1234
12345

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r=0 ; r<n ; r++){
        for(int c=0 ; c<=r ; c++){
            cout<<(c+1);           // as our indexis from zero but we want from one so c+1 will make it from 1
        }
        cout<<"\n";
    }
    
}
