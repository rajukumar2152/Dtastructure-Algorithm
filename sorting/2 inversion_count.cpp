#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>   // here  remove count it become merge sort 
using namespace std;
#define int             long long

int merge(int a[] , int s , int e ) {
	int mid = (s + e) / 2 ;
	int i = s ;
	int j = mid + 1 ;
	int k = s  ; // k is used to mark index and store it into the temp array

	int temp[1000]  ;
	int cnt = 0;  // cross inversion
	while (i <= mid && j <= e) { // when this condition is happen
		if (a[i] <= a[j]) {
			temp[k] = a[i] ;  // a[i] <=a[j]  hain to sidha copy kar do
			i++ ;
			k++ ;
		}
		else { // a[i]>a[j]

			cnt = cnt + ( mid - i ) + 1 ; // yaha soach jo sub arry banaeg wo sorted honge
			temp[k] = a[j] ;    // agar left wale koi element(at index i)  bada hain j se to  i se lekar mid tak
			k++ ;         // sare hi element bade honge
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
	return cnt ;
}

int  inversion_count(int a[] , int s , int e ) {
	int mid = (s + e ) / 2 ;
	if (s >= e) {
		return  0 ;
	}
	int x = inversion_count(a , s , mid) ;
	int y = inversion_count(a , mid + 1 , e)  ;
	int z = merge(a , s , e ) ;  // cross inversion

	return x + y + z ;
}

int32_t main() {


	int a[] = {1, 5, 2, 6, 3, 0} ;
	int n = sizeof(a) / sizeof(int)  ;
	int s = 0 ;
	int e = n - 1 ;
	cout << inversion_count(a , s , e ) ;
	// for (int i = 0 ; i < n ; i++) {
	// 	cout << a[i] << endl;
	// }
	return 0 ;
}