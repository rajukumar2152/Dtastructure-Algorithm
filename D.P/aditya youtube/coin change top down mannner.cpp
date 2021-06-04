#include <iostream>
#include <cstdlib>   // sab kuch ssahi likha hain par pata nahi kaha gadbad ho raha hain 
#include<climits>
#include <bits/stdc++.h>
using namespace std;
// int ans = INT_MAX;
int coinchangebotmup(int a[] , int size , int N , int dp[]) {
	// base case
	if (size == 0) {
		return 0 ; // matalab array khali  hain usme koi coin nahi hain
	}
	if (dp[N] != 0) {
		return dp[N];
	}
	int ans = INT_MAX;

	for (int i = 0 ; i < size ; i++) {
		if (N - a[i] >= 0) {
			int subproblem = coinchangebotmup(a , size , N - a[i] , dp) + 1  ;
			ans = min(ans , subproblem ) ;
		}

	}
	dp[N] = ans ;
	return  dp[N];

}

int main() {
	int N = 15 ;
	int a[] = {1, 2, 10};
	int dp[100] = {0};
	cout << coinchangebotmup(a ,  3 , 15 , dp) << endl ;

	return 0 ;
}






