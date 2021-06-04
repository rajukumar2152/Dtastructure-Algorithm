#include <bits/stdc++.h>
using namespace std;


int firstOcuur(int a[]  , int n , int key) {
	if (n == 0)
		return -1 ;  // base case

	if (a[0] == key)
		return 0 ;
	int i = firstOcuur(a + 1 , n - 1 , key);
	if (i == -1)
		return -1 ;
	else
		return i + 1 ;
}


int main() {

	int arr[] = {1, 2, 3, 7, 8, 9};
	int key = 7 ;
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << firstOcuur(arr , n , key ) ;

	cout << "hello world 0" ;
	return 0 ;
}





