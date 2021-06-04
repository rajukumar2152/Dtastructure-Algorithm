#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
#define int             long long


int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    while(t--){
        int n  ,k  ;
        cin>>n>>k; 
        int a[n];
        for(int i=0 ; i<n ; i++){
        	cin>>a[i];
        }  
        int sum = 0 ; 
        int count ; 
        for(int i=0 ; i<n ; i++){
        	sum= sum+a[i]; 
        }
        
        if(sum%k==0){
        	count=0 ;
        }else{
        	count =1; 
        }
    
     cout<<count<<endl ; 

    }

   return 0 ; 
} 