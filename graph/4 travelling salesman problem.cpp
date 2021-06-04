#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>  // sabkuch sahi hain kahin thora sa gadbad ho raha hain 
using namespace std;
#define int             long long
int n=4 ; 
int dist[10][10]={{0,20,42,25},
                  {20,0,30,34},
                  {42,30,0,10},
                  {25,34,10,0}
} ;
int VISTED_ALL= 1<<n-1; 
// int ans =1000; 
int tsp(int mask , int pos){
	if(mask==VISTED_ALL){
		dist[pos][0];
	}
	int ans =1000; 
	for(int city = 0; city<=n ;city++){
       if((mask&(1<<city))==0 ){
       	int newans= dist[pos][city]+tsp(mask|1<<city , city);
       	ans= min(ans , newans);
       }
       	// ans= min(ans , newans);
	}
	
	return ans ;  
}
int32_t main() {
      cout<<tsp(1,0);

  return 0 ; 
}