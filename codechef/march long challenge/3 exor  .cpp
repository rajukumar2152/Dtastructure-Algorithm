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
		int c ;
		cin >> c ;
		int temp = c;
		int i = 0 ;
		while (temp > 0) {
			temp = temp / 2;
			i++;
		}
		int a = pow(2, i - 1) - 1;
		int b = c ^ a;
		cout << a*b << endl ;

	}

	return 0 ;
}