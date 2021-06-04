#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

int main() {

	cout << "hello world " ;
	return 0 ;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
	int n = A.size();
	int m = B.size();
	int x , y ;
	// int c = 0;
	int res = 0;
	for (int i = 0 ; i < n ; i++) {

		x = abs(A[0] - A[i]);
		y = abs(B[0] - B[i]) ;

		res = res + max(x, y);
	}
	return res ;


}


[ 4, 8, -7, -5, -13, 9, -7, 8 ]
[ 4, -15, -10, -3, -13, 12, 8, -8 ]