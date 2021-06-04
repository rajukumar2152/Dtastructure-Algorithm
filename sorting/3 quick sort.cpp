#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int parttion(int a[] , int s , int e ) {
	int i = s - 1 ; // jab left wala  array me hum itrate karenge lyse hi pivoted se chota mila i ke incriment kar denge
	int j = s ;
	int p = a[e] ;

	for ( ; j <= e ; j++) {  // kuch bhi value of j
		if (a[j] < p) { // 2 ,7 ,8 ,6,1,5,4
			i = i + 1 ;
			swap(a[i] , a[j]);
		}
	}
	swap(a[i + 1] , a[e] );
	return i + 1 ;

}

void quick_sort(int a[] , int s , int e) {
	if (s >= e) // jab ek hi element ho array me
		return ;
	int p = parttion(a , s , e ) ; // jisko hum pivot karenge uska index partion se aa jayega
	// ppivot = 4
	// 2 1     4    7 8 6 5 4
	// 4 se smaller       4 se bigger
	quick_sort(a , s , p - 1) ;
	quick_sort(a , p + 1 , e) ; // pivoted element apne aap hi apne postion par hoga
}

int32_t  main() {
	int a[] = {2, 7, 8, 6, 1, 5, 4};
	int n = sizeof(a) / sizeof(int) ;
	int s = 0 ;
	int e = n - 1 ;
	quick_sort(a , s , e ) ;
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << " " ;
	}

	cout << "hello worl d " ;
	return 0 ;
}



// void partion(int a[] , int s , int e ) {
// 	int pivoted = a[e]  ;
// 	int i = s - 1 ;
// 	for (int j = 0 ; j <= e - 1 ; j++) {
// 		if (a[j] <= pivoted) {
// 			i = i + 1 ;
// 			swap(a[i] , a[j]);
// 		}

// 	}
// 	swap(a[i + 1] , pivoted);
// 	return i + 1 ;
// }