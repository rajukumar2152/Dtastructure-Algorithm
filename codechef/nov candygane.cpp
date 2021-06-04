#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>// given test cas ke liyee sahi run kar raha hain
using namespace std;  // but test case pass nahi ho rahe hain tle aur wrong andswer aa raha hain 
int N = 1000000007;

int chefno = 0 ;
int chefuno = 0 ;
bool op1 = true;
bool op2 = false ;
void recursion(int a , bool op1, bool op2) {
	if (op1 == true) {
		if (chefno % 2 == 0) {
			chefno = (chefno + a)%N;
		}
		else {
			op1 = false;
			op2 = true;4
		}
	}

	if (op2 == true) {
		if(chefuno%2==0){
		chefuno=(chefuno+a)%N;
	}
	else {
		op2=false; 
		op1=true; 
	}
  }
	// return; 

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
		// for (int i = 0 ; i < q ; i++) {
		// 	cin >> r;
		// 	// cout << endl ;
		// }
		while(q--){
			cin>>r;


		}
		for(int j=0 ; j<q; j++){
		// chefno=(chefno+a[0])%N;
		for (int i = 0; i < n ; i++) {
		    recursion(a[i], op1, op2);
		}
		if(r>n){
			if(op1=true){
				op1=false;
				op2=true;
			}
			if(op2=true){
				op2=false; 
				op1= true; 
			}

		}
		for(int i=0 ;  i<n-r ; i++){
			recursion(a[i] , op1, op2);

		}
     cout<<chefno<<endl ;
     } 

	}
	return 0 ;
}