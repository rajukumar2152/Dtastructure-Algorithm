#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int sum(int a[] , int n ){
	int  sum =0 ; 
	for(int i=0 ; i<n ; i++){
		sum = sum+a[i]; 
	}
	return sum ;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;
	while (t--) {
		int n ; 
		cin>> n ; 
		int k ; 
		cin>> k ;
		int s=0; 
		int count =0 ; 
		int a[n]; 
		int round=1;
		for(int i=0 ; i<n ; i++){
			cin>> a[i]; 
		}
        for(int i=0 ; i<n ; i++){
        	// int round=1;
        	// round=1;
        	 if(a[i]>k){
        	 	round=-1;
        	 	break;
        	 }

        	 else if(s+a[i]<=k){
                s=s+a[i];
                // round=1;
        	 }


        	 else{
        	 	s=a[i];
        	 	round++;
        	 }
        	 
        	 // cout<<round<<"ts"<<endl;
        	}
        	cout<<round<<endl;

        // cout<<raju<<

	}
	return 0; 
}  