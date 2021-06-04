#include <bits/stdc++.h>
using namespace std; 


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
   string a; 
   cin>>a ; 
   cout<<a <<endl ; 

    char b[5];
   for(int i=0 ; i<5 ; i++){
   	cin>>b[i]; 
   }
   cout<<b[3]<<b[4]; 
   
	return 0 ; 
}