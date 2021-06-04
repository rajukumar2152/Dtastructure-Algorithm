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
		// std::map<char, int> map;
		char chl , chr;
		int   l , r;
		cin >> chl >> l;
		cin >> chr >> r ;
		if (l - r  <= 1) {
			cout << -1 << endl;
		}
		// else if ( l - r == 0) {
		// 	cout << 1 << endl;
		// }
		else {
			cout << l - r - 1 << endl;
		}


		// cout << 4 - (9) << endl ;


		// cout << "raju kumar";

	}

	return 0;
}


// input
// 2
// 2
// L 50
// R 10
// 2
// L 1
// R 0

// output
// 39
// -1