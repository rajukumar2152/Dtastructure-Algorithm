#include <bits/stdc++.h>
#include <iostream>
using namespace std ;
#define N 8

void printoutput(int sol[N][N]) {
	for (int i = 0 ; i < N ; i++) {
		for (int j = 0 ; j < N ; j++) {
			cout << sol[i][j] << " ";
		}
		cout << endl;
	}
}
bool is_safe(int x , int y , int sol[N][N] ) {
	if (x < N && y < N && x >= 0 && y >= 0 && sol[x][y] == -1 )
		return true ;
	else
		return false ;

	// return   false ;
}

bool utlitufunction(int x , int y , int movi ,  int xMove[] , int yMove[] , int sol[N][N]) {
	if (sol[x][y] == 64 )
		return true ;
	int next_x , next_y;
	for (int i = 0 ; i < N ; i++) {
		next_x = x + xMove[i];
		next_y = y + yMove[i];
		if (is_safe(next_x , next_x , sol)) {
			sol[next_x][next_y] = movi;
		}
		if (utlitufunction(next_x , next_y , movi + 1 , xMove , yMove , sol) == true) {
			return  true ;
		} else {
			sol[next_x][next_y] = -1 ;
		}
	}

	return false ;

}

void solve() {
	int sol[N][N];
	for (int i = 0 ; i < N ; i++) {
		for (int j = 0 ; j < N ; j++) {
			sol[i][j] = -1;
		}
	}
	sol[0][0] = 0;

	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


	if (utlitufunction(0 , 0 , 1 , xMove , yMove , sol) == true) {
		// cout<<"solution does not exist ";
		// else
		printoutput(sol);
	}
	// else
	// 	printoutput(sol);
	// cout<<" hello";
}

int main() {

	// solve ();
	cout << "hello world" << "/n";
	cout << "raju kumar";

	return 0 ;
}


vector<int> Solution::plusOne(vector<int> &a) {
	std::vector<int> v;

	int carry = 0 ;
	int n = a.size() ;
	int sum = a[n - 1] + 1;
	if (sum <= 9) {
		v.push_back(a[n - 1]) ;
		for (int i = n - 2 ; i >= 0  ; i--) {
			v.push_back(a[i]);
		}
	}
	else {
		v.push_back(0) ;
		carry = 1  ;
		for (int i = n - 2  ; i >= 0  ; i--) {
			sum = a[i] + carry;
			if (sum > 9) {
				v.push_back(sum % 10) ;
				carry = 1 ;
			} else {
				v.push_back(a[i]) ;
			}
		}
	}
	if (sum > 9) {
		v.push_back(1) ;
	}
	reverse(v.begin() , v.end()) ;

	return v ;

}


0, 3, 7, 6, 4, 0, 5, 5, 5