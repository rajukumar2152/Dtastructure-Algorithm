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
		int u , v , a , s ;
		cin >> u >> v >> a >> s ;

		int finalvelcoity = 0 ;
		int abc = 0;
		finalvelcoity = u * u - 2 * a * s ;

		// abc = abs(u * u - 2 * a * s) ;
		// finalvelcoity = sqrt(abc);
		// cout << abc << endl;
		// cout << sqrt(2) << "sqare root of 2 is " ;

		if (finalvelcoity <= 0)
			cout << "Yes" << endl ;
		else if (finalvelcoity <= v * v)
			cout << "Yes" << endl;
		else
			cout << "No" << endl ;
	}
	return 0 ;
}
