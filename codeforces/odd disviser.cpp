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
		while (n % 2 == 0) {
			n = n / 2 ;

		}
		if (n == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}



	}
	// cout << '1' + '2' - 48;

	return 0 ;
}