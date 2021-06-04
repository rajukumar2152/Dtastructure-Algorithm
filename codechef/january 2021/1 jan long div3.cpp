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
	cin >> t ;


	while (t--) {
		int n , k  ,d; 
		cin>>n>>k>>d; 
        int a[n];
        for(int i=0 ; i<n ; i++){
        	cin>>a[i];
        }
      int sum=0 ; 
      for(int i=0 ;i<n ; i++){
      	sum= sum +a[i]; 
      }
      int z =sum/k;
      if(z==0){
      	cout<<0<<endl ;
      }
       if(z>0&&z<=d ){
      	cout<<z<<endl; 
      }
      if(z>0&&z>d){
      	cout<<d<<endl ; 
      }
    }
   return 0 ; 
} 