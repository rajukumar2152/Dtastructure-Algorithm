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
		int a = 0 ;
		a = n / 2020;
		int b = 0 ;
		b = n % 2020;
		if (b <= a) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}
	// cout << '1' + '2' - 48;

	return 0 ;
}