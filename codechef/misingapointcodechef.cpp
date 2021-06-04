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
       cin>> n ;
       int sumx=0; 
       int  sumy =0 ; 
      int matrix[4*n-1][2];
      for(int i=0;i<4*n-1 ; i++){
        for(int j=0;j<2;j++){
          cin>>matrix[i][j];
        }
      }
      vector<int>x;
      vector<int>y;

      for(int i=0; i<4*n-1 ;i++){
        x.push_back(matrix[i][0]);
        y.push_back(matrix[i][1]);

      }
      sort(x.begin() , x.end());
      sort(y.begin() , y.end());
      for( int i =0 ;i<x.size() ; i++){
        sumx= x[i]-sumx;
      }
      for( int i =0 ;i<y.size() ; i++){
        sumy=  y[i]-sumy;
        // cout<< sumy<<endl;
        
        }


     
       cout<< sumx<< " "<< sumy<<endl;
      
    
  }     
	
	return 0;
}
