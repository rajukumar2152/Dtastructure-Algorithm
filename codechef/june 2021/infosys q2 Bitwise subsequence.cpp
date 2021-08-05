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
	int n   ;
	cin >> n ;
	int a[n]  ;
	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
	}
	int i = 0 ,  j = 1 ;
	int ans = 0 , cnt = 0 ;
	while (j < n) {
		if ((a[i]&a[j]) * 2 < (a[i] | a[j]) == true) {
			cnt = cnt + 1 ;
			ans = max ( ans , cnt) ;
			i++ ;
			j++ ;
			cout << ans << endl ;
		}
		else {
			cnt = 0 ;
			i++ ;
			j++ ;
		}
	}

	cout << ans << " raju kumar"  ;
	return 0 ;
}
// Ai[x] & Ai[x + 1] ) * 2 < ( Ai[x] | Ai[x + 1] ) is true