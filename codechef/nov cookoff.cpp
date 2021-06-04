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
    int n , m , k ; 
    cin>>n>>m>>k ; 
    int c=0 ; 
    int a[n][k+1];
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<k+1; j++){
    		cin>>a[i][j];
    	}
    }
    int sum=0 ; 
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<k ; j++){
    		sum = sum +a[i][j];
    	}
    	if(sum>=m&&a[i][k]<=10){
    		c++;
    	}
    	sum =0; 

    }
    cout<<c<<endl ; 
    return 0 ; 
}
        