#include <bits/stdc++.h>
using namespace std;
#include <iostream>


void bubble_sort(int a[] , int n ) {
	if (n == 1)
		return ; // base case

	for (int i = 0 ; i < n - 1 ; i++) {
		int j = i + 1 ;
		if (a[i] > a[j])              // recursion me kya ho raa hain
			swap(a[i] , a[j]);// a[i]>a[j] yaha swape kar do

	}
	bubble_sort(a , n - 1 ) ; // yaha recurison call hua hain

}

// here j is  for inner loop and n id for outer loop
void bubble_sort_complete_recursive(int a[] , int j , int n ) {
	// yaha do  base case  hoga one for j and  one for n

	// agr 1 elemenrt hua array me simple return kar do
	if (n == 1)    // base ccase 1
		return ;

	//base case 2
	// agr j last tak pahunch gaya
	if (j == n - 1) {
		bubble_sort_complete_recursive(a , 0 , n - 1 ); //0 se swap karna start kar do laset wale ko chod ke
	}
	if (a[j] > a[j + 1])
		swap(a[j] , a[j + 1]);
	bubble_sort_complete_recursive(a, j + 1	, n);
	return ;
}
int main() {
	int a[] = {4, 3, 1, 5} ;
	// bubble_sort(a, 4) ;

	bubble_sort_complete_recursive(a , 0 , 4) ;
	for (int i = 0 ; i < 4 ; i++) {
		cout << a[i] << " "  ;

	}

	cout << "hellom worlsd " ;
	return 0 ;
}