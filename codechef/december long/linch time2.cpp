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
        int n ;
        string s[n] ; 
        string p[n] ; 
       for(int i=0 ; i<n ; i++){
       	cin>>s[i];
       }
        for(int i=0 ; i<n ; i++){
       	cin>>p[i];
       }
       int  count =0 ; 
        for(int i=0 ; i<n ; i++){
        	if(s[i]!=p[i]){
        		count= count+1; 
        	}

        }
        if(count%2==0){
        	cout<<"YES"<<endl ; 
        }
        else{
        	cout<<"NO"<<endl ; 
        }

    

    }


    return 0 ; 

  } 