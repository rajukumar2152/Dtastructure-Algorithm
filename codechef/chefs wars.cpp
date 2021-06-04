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
   	int h , p  ;
   	cin>> h; 
   	cin >> p;
   	
   	int a=h; 
   	while(p>0){
   		a= a-p;
   		p=p/2;
   	}
   	if(a>0)
   		cout<<0 ;
   	else 
   		cout<<1;

    cout<< endl ; 

   }
    

   return 0; 
} 