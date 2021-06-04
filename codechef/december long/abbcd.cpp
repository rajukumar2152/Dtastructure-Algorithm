#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>  // finall submit ho gaya  
using namespace std;
// bool grater(int a , int b){
//     if(a>b)
//         return true; 
//     else 
//         return false ; 
// }

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t ; 
    cin>> t ; 
    // int x,y ;
    // int sheet=0;  
    while(t--){
    	int n ;
    	cin>>n ; 
    	int a[n]; 
    	for(int i=0 ; i<n ; i++){
    		cin>>a[i]; 
    	} 
        std::map<int , int > m;
        for(int i=0 ; i<n ; i++){
            m[a[i]]++;
        }
         std::map<int , int > mapp;
        for(auto i:m){
            mapp[m[i]]++;
        }
       int K=INT_MAX;
       for(auto z:mapp){
        k=min(k , mapp[z]);
       }
      cout<<k<<endl ; 
    }
    return 0 ; 
} 