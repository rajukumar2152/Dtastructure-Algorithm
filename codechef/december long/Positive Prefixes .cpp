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
	int t ;
	cin >> t ;


	while (t--) {
		int n , k ; 
		cin>>n>>k ; 
        int a[n];
		for(int i=0; i<n ; i++){
			if(i%2==0){
				a[i]=-1*i+1;
			}else{
				a[i]=i+1; 
			}
		}
		int positive = ceil(n/2);
		
			for(int i=n-1; i>=0 ; i--){
				if(positive<k){
				  if(a[i]<0){
					a[i]=-1*a[i];




					positive++;

			     	}
                }
                 if(positive>k){
                	if(positive>k){
                		if(a[i]>0){
                			a[i]=-1*a[i];
                			positive--;
                		}
                	}
                }
               
			}
			
			for(int i=0 ;i< n ; i++){
				cout<<a[i]<<" ";

			}

			
		  cout<<endl ; 

	}
   return 0 ; 
}


