#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>// given test cas ke liyee sahi run kar raha hain
using namespace std;  // but test case pass nahi ho rahe hain tle aur wrong andswer aa raha hain 
int N = 1000000007;
int   solve(int a[] ,int n , bool op1 ,bool op2 , int r ){
	int sum=0 ;
	int sum2=0;
   for(int i=0 ; i<r ; i++){
	if(op1){
		if(i<n){
		sum= (sum+a[i])%N;
	}else{
		sum= (sum+a[i-n])%N; 
	}
		if(sum%2==1){
			op2=true;
		}
		if(i==n-1){
			op2= true ;
		}
		if(sum%2==1 && i==n-1)
			op1= true ; 
	}else {
		if(i<n){
		sum2= (sum2+a[i])%N; 
	} else {
		sum2= (sum2+a[i-n])%N; 
	}
		if(sum2%2==1){
			op1= true ;
		}
		if(i==n-1){
			op1=true; 
		}
		if(sum2%2==true && i==n-1){
			op2= true ; 
		}
	}
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
		cin >> n ;
		int a[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		int q , r ;
		cin >> q;
	    bool op1 = true ; 
	    bool op2 = false ; 
		while(q--){
			cin>>r;
			cout<<solve(a , n ,op1 , op2 , r)<<endl;


		}
		
	}
	return 0 ;
}