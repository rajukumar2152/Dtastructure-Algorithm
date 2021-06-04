#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    while(t--){
    	int n ;
    	cin>>n ; 
    	int b[n]; 
    	for(int i=0 ; i<n ; i++){
    		cin>>b[i]; 
    	} 
        int a[n]={0};
        int  c[n];
        int t=0 ; 
        int i=2 ; 
        int j=2;
        bool p[n];
        memset(p,true, sizeof(p));
       //  for( int i=2 ; i<100; i++){
       //      for( int j=2 ; j<=i; j++){
       //          if(j%i==0)
       //              break; 
       //      }
       //      if(i==j){
       //          c[t]=i;
       //          t++;
       //      }
       //      if(t==n)
       //          break;
       //  }
       // for(int i=0 ; i<n ; i++){
       //  if(b[i]==i+1){
       //      a[i]=c[i];
       //  }
       //  else 
       //      a[i]=c[n-1];
       // }
     for(int i=0 ; i<n ; i++){
        cout<<p[i]<<" ";
     }
    cout<<endl ; 
    // for(int i=0 ; i<n ; i++){
    //     cout<<c[i]<<" ";
    // }
    // cout<<endl ; 
    }
    // cout<<endl ; 

    return 0 ;
}