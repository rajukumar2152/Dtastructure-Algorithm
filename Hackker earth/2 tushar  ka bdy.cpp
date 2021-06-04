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
	// t = 1;


	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		int cnt = 0 ;
		int z = 0 ;

		for (int i = 0 ; i < n ; i++) {
			if (a[i] % 2 == 0) {
				cnt = cnt + 1;
			}
		}
		int res = 0;
		int odd = 0 ;
		// int z = 0 ;
		for (int i = 0 ; i < n ; i++) {
			res = res ^ a[i];
			if (res % 2 == 0) {
				cnt = cnt + 1;
				odd = 0 ;
				// cout << cnt << "raju" << endl;
			}
			// cout << cnt << "raju" << endl;
			else {
				odd = odd + 1;
				// if (odd >= 2) {
				// odd = odd + 1;
				z = z + 1 ;
				// cout << z << endl;
				// }
			}
		}
		cout << cnt + (z - 2) << endl;



	}

	return 0 ;

}