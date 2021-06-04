#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

bool comp(int x , int y) {
	if (x > y) {
		return true ;
	}
	else
		return false ;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;


	while (t--) {
		int n , k ;
		cin >> n >> k;
		int a[n];
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		sort(a , a + n , comp);
		int total = 0 ;
		for (int i = 0 ; i < n ; i++) {
			total = total + a[i];
		}
		if (total < 2 * k) {
			cout << -1 << endl;
		}
		else if (total == 2 * k) {
			cout << n << endl;
		}

		else {

			int i = 2 ;
			int c = 0 ;
			int suma = k - a[0];
			int sumb = k - a[1];
			int res = max(suma , sumb) ;
			bool bothnrgtive = true;
			while (res > 0 && i < n - 1 && bothnrgtive) {
				// res = max(suma , sumb);
				if (suma >= sumb) {
					suma = res - a[i];
				}
				else
					sumb = res - a[i];
				// suma = suma - a[i];
				// sumb = sumb - a[i];
				res = max(suma , sumb);
				i = i + 1;
				c = c + 1;
				if (suma < 0 && sumb < 0) {
					bothnrgtive == false;
				}
				// cout << c  << "raju" << a[i] << "val of i" << i << endl ;

			}
			// 	if (c + 2 > n) {
			// 		cout << -1 << endl;
			// 	} else
			// 		cout << c + 2 << endl ;
			// }
			// for (int i = 0 ; i < n ; i++) {
			// 	cout << a[i] << " ";
			// }
			cout << c + 2 << endl;
		}
		// cout << c + 2 << endl;
	}

	return 0 ;
}