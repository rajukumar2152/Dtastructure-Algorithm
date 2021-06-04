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
	int Cp , Mp ;
	int a , b ;
	while (t--) {
		cin >> Cp >> Mp;

		if (Cp >= 9 && Mp >= 9) {
			if (Cp % 9 == 0) {
				a = Cp / 9;
			}
			else {
				a = Cp / 9 + 1;
			}

			if (Mp % 9 == 0) {
				b = Mp / 9;
			}
			else{
				b=Mp/9+1;
			}


			if (a < b) {
				cout << 0 << " " << a;
			}
			else if (a > b) {
				cout << 1 << " " << b;
			}
			else {
				cout << 1 << " " << 1;
			}
		}
		else {
			cout << 1 << " " << 1 ;
		}

		cout << endl ;
	}


	return 0 ;
}