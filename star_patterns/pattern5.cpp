/*

*****
****
***
**
*


*/


#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
for(int r=0 ; r<n ; r++){
    for(int c=0  ;c<n-r ; c++  ){    // at first iteration no of stars equal n then each time it one less than previous
        cout<<"*";
    }
    cout<<"\n";
}
}
