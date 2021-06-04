#include <iostream>
#include <cstdlib>
#include<climits>
#include <bits/stdc++.h>
using namespace std;


// recuresive apprcoch nahi lag araha hain

// ye question kadan's algorthm se ho jayega
// use kadan algoritm for thsi questioin
int  test (int c) {
	c = c + 1;
	return c ;
}
int maximumSubArrSum(int a[] , int n , int i ) {

	if (n <= 0) {
		int count = 0 ;
		cout << test(count + 1) << endl ;
		return 0 ;
	}
	return   max(a[i] + maximumSubArrSum(a , n - 1 , i) , maximumSubArrSum(a , n - 1, i + 1));
}

int main() {

	int a[] = { -3, 2, 5, -1, 6, 3, -2, 7, -5, 2};
	int n = sizeof(a) / sizeof(a[0]) - 1;
	cout << maximumSubArrSum(a , n , 0);
	cout << "hello world " ;
	return 0 ;
}