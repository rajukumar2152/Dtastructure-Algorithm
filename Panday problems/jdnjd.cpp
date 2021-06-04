# include <bits/stdc++.h>
using namespace std;

void solve(int a[]  , int n ) {
	int i = 0 ;
	int j = 1 ;
	while (i < n && j < n) {

		if (a[i] == 0) {
			swap(a[i] , a[j]);
			i = i + 1;
			j = j + 1;
		}
		if (a[i] == 0 && a[j] == 0) {
			j = j + 1;
		}

		if (a[i] != 0 && a[j] != 0) {
			i = i + 1 ;
			j = j + 1 ;
		}

	}

	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " " ;
	}
}

int main() {

	int a[11] = {0, 1, -2, 3, 4, 0, 0, 5, -27, 9, 0};
	solve(a , 11 );
	// cout << "hell woreld ";

	return 0 ;
}