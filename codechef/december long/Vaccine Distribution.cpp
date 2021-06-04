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
		int n ,d ; 
		cin>>n>>d;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin>>a[i];
		}
		int crisk =0; 
		int nrisk=0 ; 
		for(int i=0 ; i<n ; i++){
			if(a[i]<=9||a[i]>=80){
				crisk++;
			}else
			
				nrisk++;
			
		}
		if(crisk%d!=0){
			crisk=(crisk/d)+1;
		}
		else
			crisk=crisk/d;
		if(nrisk%d!=0){
			nrisk=(nrisk/d)+1;
		}
		else
			nrisk= nrisk/d;
		int minday= nrisk+crisk;
		cout<<minday<<endl; 
		


	}
	return 0 ;
}