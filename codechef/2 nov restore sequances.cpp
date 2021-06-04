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
            b[i]--;
    	} 
        int a[n];
        for(int i=0 ; i<n ; i++){
            a[i]= n-b[i];
        }
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<" ";
        }
       cout<<endl ; 
    }
    // cout<<endl ; 

    return 0 ;
}