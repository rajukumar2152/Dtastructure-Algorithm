#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;

	while (t--) {
		int  x, y , k , n ;
		cin >> x >> y >> k >> n;
		// if (x < y) {
		// 	while (x < y && x >= 0 && x <= n && y >= 0 && y <= n) {
		// 		if (x == y) {
		// 			cout << "YES" << endl ;
		// 			break ;
		// 		}
		// 		x = x + k;
		// 		y = y - k;
		// 		// if (x == y) {
		// 		// 	cout << "YES" << endl ;
		// 		// 	break ;
		// 		// }

		// 	}
		// }
		// else {
		// 	if (x == y) {
		// 		cout << "YES" << endl ;
		// 		break ;
		// 	}
		// 	y = y + k;
		// 	x = x - k;
		// if (x == y) {
		// 	cout << "YES" << endl ;
		// 	break ;
		// }

		// }
		// cout << "NO" << endl;
		if (x == y) {
			cout << "YES" << endl;
		}
		if (x < y) {
			while (x < y && x >= 0 && x <= n && y >= 0 && y <= n) {
				x = x + k;

				y = y - k;
				if (x == y) {
					cout << "YES" << endl;
				}
				break;
			}
		}
		if (y < x) {
			while (y < x && x >= 0 && x <= n && y >= 0 && y <= n) {
				x = x - k;
				y = y + k;
				if (x == y) {
					cout << "YES" << endl;
				}
				break;
			}
		}
		// cout << "NO" << endl;
		if (x != y) {
			cout << "NO" << endl;
		}

	}


	return 0 ;


}