#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

char solve(string a, int m , int x , int y ) {
	int fscount = 0 ;
	int parsolve = 0 ;
	int unsolvee = 0 ;
	for (int i = 0 ; i < m ; i++) {
		if (a[i] == 'F')
			fscount++;
		else if (a[i] == 'P')
			parsolve++ ;
		else
			unsolvee++ ;
	}

	if (fscount >= x)
		return '1';
	else if (parsolve >= y && fscount == x - 1)
		return '1' ;
	else
		return '0' ;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;
	while (t--) {
		int n , m , x , y ;
		cin >> n >> m ;
		cin >> x >> y ;
		string a ;
		string res = " ";

		while (n--) {
			cin >> a ;
			char t = solve(a , m , x , y );
			res = res + t ;
		}


		cout << res << endl;
	}
	return 0 ;
}


