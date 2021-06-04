#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t  ;
	cin >> t ;
	while (t--) {
		int n , k  ;
		cin >> n >> k;
		int a[n];
		int count=0 , b ;
		for (int  i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		for (int i = 0 ; i < n - 1 ; i++) {
			if (a[i] < k) {
				// count = i + 1;
				cout << count << endl ;


			}
			else {
				b = a[i] - k;
				a[i + 1] = a[i + 1] + b;
				count = i + 1;
			}
		}
		if (a[n - 1] < k) {
			cout << count + 1 << endl ;

		}
		else {

			count =count+ a[n - 1] / k + 1;
			// a[n - 1] = a[n - 1] - k;
			cout << count << endl;
		}

	}
	return 0 ;
}