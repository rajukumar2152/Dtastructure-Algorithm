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
		int n, k, x, y ;
		cin >> n >> k >> x >> y;
		int  b;
		b = 0;
		if (n % 2 == 1){
			cout << "YES" << endl;
			// return 0;
		}

		else {
			while (b < n / k) {
				if ((x + k) % n == y) {
					cout << "YES" << endl;
                     break; 
				}

				// break;
				x = x + k;
				b = b + 1;

			}
			// if (b+1 > n / k) {
			// 	cout << "NO" << endl;
			//  }
		}
		cout<<"NO"<<endl; 
	}
	return 0 ;
}