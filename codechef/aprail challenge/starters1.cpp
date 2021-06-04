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
		int x , y , xr , yr , d ;
		cin >> x >> y >> xr >> yr >> d ;

		int xdays = x / xr ;
		int ydays = y / yr ;
		if (xdays >= d  && ydays >= d) {
			cout << "YES" << endl ;
		}
		else
			cout << "NO" << endl ;


	}
	return 0 ;
}


