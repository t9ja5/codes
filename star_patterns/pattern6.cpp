/*

12345
1234
123
12
1




*/
#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;

for(int r=0 ; r<n ; r++){
    for(int c=0 ; c<n-r ; c++){
        cout<<c+1;
    }
    cout<<"\n";
}

}
