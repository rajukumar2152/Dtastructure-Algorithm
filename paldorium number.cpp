#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>
#include <stack>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int t ;
	// cin >> t;
	// for (int j = 0; j < t; j++) {
	int n ;

	cin >> n;
	int digitkigint = 0;
	while (!n < 1) {
		n = n / 10;
		digitkigint = digitkigint + 1;
	}

	int a[digitkigint];
	int i = 0 ;
	for (int k = n; k >= 0; k / 10) {
		//int i = 0 ;
		a[i] = k % 10;
		// n = n / 10;
		i = i + 1;
		//a[i] = n % 10;
		cout << a[i] << "raju";
	}
	int count = 0;
	for (int j = (digitkigint - 1) ; j >= 0; j --) {

		if (a[j] == a[(digitkigint - 1) - j]) {
			count = count + 1;
		}
	}
	if (count == digitkigint) {
		cout << "paradomium number";
	}
	else
		cout << "not a paradominum no ";
	cout << digitkigint;
	cout <<  count;
	//for (int i = 0 ; i < digitkigint; i++) {
	cout << a[0] << " ";
	//}

	return 0 ;
}