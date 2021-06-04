#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
// bool grater(int a , int b){
//     if(a>b)
//         return true;
//     else
//         return false ;
// }

double percent(int x) {
	double y = 120 ;
	return x / y * 100;

}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;

	while (t--) {
		int n ;
		cin >> n ;
		string str ;
		cin >> str;
		int c = 0;
		for (int i = 0 ; i < str.size(); i++) {
			if (str[i] == '1') {
				c = c + 1;
			}
		}
		int x;
		x = 120 - n + c;
		double res = percent(x);
		if (res >= 75) {
			cout << "YES" << endl ;
		} else {
			cout << "NO" << endl ;
		}



	}
	// cout << percent(20);


	return 0;
}