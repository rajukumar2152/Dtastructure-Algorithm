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
		int  n , m , x , y , a , b  ;
		cin >> n >> m ;
		cin >> x >> y ;
		cin >> a >> b ;

		int ansx = n - a ;
		int ansy = m - b ;
		if (ansx == x && ansy == y) {
			cout << "NO" << endl ;
		}
		else
			cout << "YES" << endl  ;


	}
	return 0 ;
}