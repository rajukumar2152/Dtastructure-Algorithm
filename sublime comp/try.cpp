// #include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int x;
	// cin >> x;
	// cout << (x * 1000) << endl;
	// cout << "hello world";
	// //raju kumar;
	// long long y = 1000 ;
	// cout << endl ;
	// cout << "chandigarh is a beautigul city ";
	// cout << 1000;
	// string  name = "mahesh kumar ";
	// cout << name << endl;
	// cout << name[0];
	// cout << name[1] << endl ;
	// for (int i = 0 ; i < 6; i++) {
	// 	cout << name[i];
	// }
	// cout << endl ;
	// string car;
	// for (int i = 0 ; i < 40; i++) {
	// 	cin >> car[i];
	// }
	// cout << car[0] << endl;
	// for (int i = 0; i < 40; i++) {
	// 	cout << car[i];
	// }
	string abc;
	getline(cin , abc);
	cout << abc << " ";
	// string name = "raju kumar clasbhdh";
	// getline(name );
	abc.push_back('k');
	cout << abc << " ";
	abc.pop_back();
	cout << abc << " ";
	string::iterator  it;
	for (it = abc.begin(); it != abc.end(); it++) {
		cout << *it << " ";
	}
	// string::iterator it2;
	// for (it2 = abc.end(); it2 != abc.begin(); it2++) {
	// char name[10] = "raju";
	// for (int k = 0 ; k < 10 ; k++) {
	// 	cout << name[k] << " ";
	// }
	return 0 ;
}