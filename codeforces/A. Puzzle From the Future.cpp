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
		string a ;
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		int last = -1 ;
		string b ;
		for (int i = 0 ; i < n ; i++ ) {
			if (last == -1) {
				b.push_back('1');
				last = 1;
			}
			if (last == 1) {
				if (a[i] == '1') {
					b.push_back('1');
					last = 2;
				} else {
					b.push_back('0');
					last = -1;
				}
			} if (last == 0) {
				if (a[i] == '1') {
					b.push_back('1');
					last = 2;
				} else {
					b.push_back('1');
					last = 1;
				}
			}
			if (last == 2) {
				if (a[i] == '1') {
					b.push_back('0');
					last = 1;
				} else {
					b.push_back('1');
					last = 1;
				}
			}

		}
		cout << b << endl ;



	}
	// cout << '1' + '2' - 48;

	return 0 ;
}