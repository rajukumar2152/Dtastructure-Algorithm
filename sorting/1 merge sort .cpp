#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

void merge(int a[] , int s , int e ) {
	int mid = (s + e) / 2 ;
	int i = s ;
	int j = mid + 1 ;
	int k = s  ; // k is used to mark index and store it into the temp array

	int temp[1000]  ;

	while (i <= mid && j <= e) { // when this condition is happen
		if (a[i] <= a[j]) {
			temp[k] = a[i] ;  // a[i] <=a[j]  hain to sidha copy kar do
			i++ ;
			k++ ;
		}
		else { // a[i]>a[j]


			temp[k] = a[j] ;
			k++ ;
			j++ ;

		}
	}
	// when on eof the array is left
	while (i <= mid) { // agar j  khatam ho jaya aur i rah gaya array me
		temp[k] = a[i] ;
		k++ ;
		i++ ;
	}
	while (j <= e) {   // agar j  rah gaya aur i khatam  ho gaya to  j walo ko copy kar do
		temp[k] = a[j] ;
		k++ ;
		j++ ;
	}
	for (int i = s ; i <= e ; i++) {
		a[i] = temp[i] ;   // yaha actul array me sabhi ko copy kar diya
	}

}

void   merge_sort(int a[] , int s , int e ) {
	int mid = (s + e ) / 2 ;
	if (s >= e) {
		return   ;
	}
	merge_sort(a , s , mid) ;
	merge_sort(a , mid + 1 , e)  ;
	merge(a , s , e ) ;


}

int32_t main() {


	int a[] = {1, 5, 2, 6, 3, 0} ;
	int n = sizeof(a) / sizeof(int)  ;
	int s = 0 ;
	int e = n - 1 ;
	// cout <<
	merge_sort(a , s , e ) ;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << endl;
	}
	return 0 ;
}