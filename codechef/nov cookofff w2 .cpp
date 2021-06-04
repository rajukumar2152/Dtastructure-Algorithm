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
    	string a ; 
    	string b ; 
        cin>>a; 
        cin>>b ; 
        int s=0 ; 
        int e =0 ;
        int i=0 ;  
        while(i<a.size()){
        	if(i%2==0 &&[i]!b[j]){
        		s=i;
        		j=i;
        	}
        	else if(i%2==1 ){
        		if(a[i]!=b[i]){
        			s=i;
        		}
        	}
        	else if(i%2==0 ){
        		if(a[i]!=a[j]){
                    e= i;
        		}
        	}
        }


    }

  return 0 ; 
}