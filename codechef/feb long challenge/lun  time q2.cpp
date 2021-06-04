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
		// int n ;

		int a[10];
		for (int i = 0 ; i < 10 ; i++) {
			cin >> a[i];
		}
		int k ;
		cin >> k ;


		for (int i = 10 - 1 ; i >= 0 ; i--) {
			k = k - a[i];
			if (k < 0 && a[i] != 0) {
				cout << i + 1 << endl ;
				break ;
			}
		}

	}

	return 0;
}