#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long


int findPeak(int a[] , int s, int e ) {
	// int s=0, e=n-1;
	int mid = s + (e - s) / 2;
	if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1]) {
		return mid ;
	}
	if (a[mid] < a[mid + 1]) {
		return findPeak(a, mid + 1, e);
	}
	else {
		return findPeak(a , s + 1, mid);
	}

}

int32_t main() {

	// int arr[] = { 1, 3, 67, 4, 1, 0 ,65};
	int arr[] = {5, 10, 20, 15};
	int n = sizeof(arr) / sizeof(arr[0]);
	int s = 0 ;
	int e = n - 1;
	cout << "Index of a peak point is "
	     << findPeak(arr, s, e);
	cout << "hello world ";
	return 0 ;
}