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
		int n ;
		string  str;
		cin >> str;
		std::map<string, string> m;

		m["0000"] = "a";
		m["0001"] = "b";
		m["0010"] = "c";
		m["0011"] = "d";
		m["0100"] = "e";
		m["0101"] = "f";
		m["0111"] = "g";
		m["1000"] = "i";
		m["1001"] = "j";
		m["1010"] = "k";
		m["1001"] = "l";
		m["1100"] = "m";
		m["1101"] = "n";
		m["1110"] = "o";
		m["1111"] = "p";

		string demo = "";
		// int count = 0 ;
		// string h = "0000";
		for (int i = 0 ; i < str.size(); i = i + 4) {
			for (int j = i; j < i + 4; j++) {
				demo = demo + str[j];
			}
			cout << m[demo] << endl;
			demo = "";
			// cout << i << endl ;
			// count = count + 1;
			// if (count < 4) {
			// 	// count = count + 1;
			// 	demo = demo + str[i];
			// } if (count == 4) {
			// 	cout << m[demo];
			// 	count = 0 ;
			// 	demo = "";
			// }
			// cout << count << endl;
			// if (count == 4) {
			// 	cout << m[h];
			// 	count = 0;
			// 	demo = "";
			// } else {
			// 	count = count + 1;
			// 	demo = demo + str[i];
			// }
			// cout << m[demo];
		}
		cout << endl;
		// cout << str << endl;
		// for (auto i : m) {
		// 	cout << i.second << endl;
		// }
		// cout << m["0000"]

		//      string z = "";
		// string c = "rajukumar";
		// int count = 0;
		// for (int i = 0 ; i < 4 ; i++) {
		// 	z = z + c[i];
		// 	count++;
		// 	cout << count << endl;
		// }
		// cout << z << endl;
		// cout << "raju kumar" << endl ;



	}

	return 0 ;
}