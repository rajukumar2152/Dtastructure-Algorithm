#include <bits/stdc++.h>
#include <iostream>        // ye bhi sahi run kar raha hain 
using namespace std ;

void longestsubsequence(int a[] , int n ){
	int t[n]={1} ;
	// suruat me longest subsequence 1 hain  singele single element 

	
	int result;
	
    for(int i=1 ; i< n ; i++){
    	for (int j =0 ; j<i; j++){
    		if (a[j]<a[i])
    			t[i]= max(t[i] , t[j]+1);
    	
    	}
    	// cout<< t[i]<< " " ;
      
    }
    sort(t,t+n);
    cout<<t[n-1];
   

   
}



int main(){
    int arr[] = { 10, 2, 24, 33, 21 ,66 ,0, 99, 50, 41, 6 }; 
	//int arr[] = {3, 10, 2, 1, 20} ;
    int n = sizeof(arr)/sizeof(arr[0]);  
    longestsubsequence(arr , n );
    

	return 0  ; 
}