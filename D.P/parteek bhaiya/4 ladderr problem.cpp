#include <iostream>
#include <cstdlib>
#include<climits>
#include <bits/stdc++.h>
using namespace std;



int ladderProrecursiveMethod(int n , int  k ) {
	if (n == 0)
		return 1;
	if (n < 0)
		return 0 ;   // recursion sahi run kar raha hain
	int ans = 0 ;
	for (int i = 1 ; i <= k ; i++) {
		ans = ans + ladderProrecursiveMethod((n - i), k  );
	}
	return ans ;
}
void solve(int ans) {
	cout << ans << "checking of answer " ;
}

int ladderproDPmethod(int  n , int k  , int dp[]) {
	// int dp[100] = { -1};
	if (n == 0) {
		// dp[n] = 1;
		return 1 ;
	}
	if (dp[n] != 0) {
		// dp[n] = 0 ;    // dp solution ,e thora sa dikkat aa  rahahain
		return dp[n];
	}
	int ans = 0 ;
	for (int i = 1 ; i <= k ; i++) {
		if (n - i > 0) {
			ans = ans + ladderproDPmethod((n - i) , k , dp);
		}
	}
	solve(ans);
	return dp[n] = ans;
}

int  main() {

	// int ans = 4 ;
	// cout << ans << "ans is checking here ";
	// cout << ladderProrecursiveMethod(4 , 3); // ans is 7   // n=5 , k=3 nas is 13
	int dp[10] = {0};
	cout << ladderproDPmethod(4, 3 , dp) << endl   ;

	for (int i = 0 ; i <= 4 ; i++) {
		cout << dp[i] << " ";
	}

	return 0 ;
}