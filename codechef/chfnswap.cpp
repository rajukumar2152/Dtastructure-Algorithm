#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int equalchek(int a[] , int b[] , int n ){

    int equalcount=0;
	for(int i=0 ; i<n ; i++){
   		for(int j=0 ; j<n ; j++){

   			if (a[i]==b[j])
   				equalcount = equalcount+1;
   		}
   	}
   	return equalcount;

}

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
   	int a[n];
   	int b[n];
    
   	int swapcount=0;
   	
   	for(int i=0 ; i<n ; i++){
   		cin>> a[i];
   	}

   	for(int i =0;i<n ;  i++){
   		cin>> b[i];
   	}
   	sort(a , a+n );
   	sort(b , b+n ); // yaha dono ko sort kar diya 
   	if(equalchek(a, b, n )==n){
   		cout<<0<<endl;  // agar dono sare element same hua to swap karne ki jarurat nahi hain 
   	}
   	for(int i=0 ;i<n ; i++){
   		
   		if(a[i]==b[i]){
   			a[i]=a[i];
   		}
   		if(a[i]!=b[i+1]&&  i+1<n){  //ek dusare ke samne wala element same nahi hain to agla comppare karo aur swap kar do 
   				swap(a[i], b[i+1]);
   				swapcount= swapcount+min(a[i],b[i+1]);
   				///cout<<swapcount <<endl;
   				// if(equalchek(a, b , n)==n){
   		  //       cout<<swapcount<< endl;
   		  //   }
   		}
   		

   		

   		// 	if(a[i]==a[i+1]&& b[j]==b[j+1]  && j+1<n){  //ek dusare ke samne wala element same nahi hain to agla comppare karo aur swap kar do 
   		// 		swap(a[i], b[j+1]);
   		// 		swapcount= swapcount+min(a[i],b[j+1]);
   		// 		if(equalchek(a, b , n)==n){
   		//         cout<<swapcount<< endl;

   		// 	}
   		// }
   	}
   	if(equalchek(a, b , n)==n){
   		        cout<<swapcount<< endl;
   		    }
   	



   
   // if(equalchek(a, b , n)!=n){
   // 		cout<<-1<< endl;
   // 	}


}
    return 0 ;
}