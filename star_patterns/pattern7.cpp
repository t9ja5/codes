#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;

// space in 1st row = n then each time space is n-1
// star are double 2*curent_iteration-1

// for next row"\n"
for(int r=0 ; r<n ; r++){
    
    // for space
    for(int s=0 ; s<n-r ; s++){
        cout<<" ";
    }
    
     // for starcolum
        for(int c=0 ; c<2*r+1 ; c++){
            cout<<"*";
        }
        
        // for space
    for(int s=0 ; s<n-r ; s++){
        cout<<" ";
    }
        
    cout<<"\n";
}
}

/*
     *     
    ***    
   *****   
  *******  
 ********* 
*/