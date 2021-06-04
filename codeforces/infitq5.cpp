#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int solve(int index) {
	int ans = index * 5 ;
	int output = 0 ;
	while (ans > 0) {
		if (ans % 2 == 1) {
			output = output + ans ;
			ans = ans - 2 ;
		}
	}
	int final_output = 0 ;
	while (output > 0) {
		final_output = final_output + output % 10 ;
		output = output / 10 ;

	}
	return final_output ;
}
int main() {
	string input ;
	cin >> input;
	// int index = -1 ;
	int test = 0;
	int outnum ;
	for (int i = 0 ; i < input.size() ; i++) {
		if (input[i] = ('a' || 'e' || 'i' || 'o' || 'u')) {
			test = -1 ;
			// index = i ;
			outnum = solve (i) ;
			input[i] = outnum ;
		}
	}
	if (test == -1) {
		for (int i = 0 ; i < input.size() ; i++) {
			cout << input[i] ;
		}
	}
	else
		cout << -1;



	cout << endl ;
	return 0 ;
}