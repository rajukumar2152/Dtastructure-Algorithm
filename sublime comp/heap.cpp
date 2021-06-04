#include<iostream>
#include<string>
#include<queue>
using namespace std;
void heapify(int a[], int n , int i) {
	int larg = i;
	int lefcld = 2 * i + 1;
	int rhcld = 2 * i + 2;
	if ( lefcld < n && a[lefcld] > a[i]) {
		larg = lefcld;
	}
	if (rhcld < n && a[rhcld] > a[i]) {
		larg = rhcld;
	}
	if (larg != i) {
		swap(a[larg], a[i]);
		heapify(a, n, larg);
	}
}
void heap (int a[], int n ) {
	for (int i = 0 ; i < n / 2 - 1; i < n ) {
		heapify(a, n, i);

		for (int i = n - 1 ; i > 0; i--) {
			swap(a[i], a[0]);
			heapify(a, i , 0);

		}
	}



}

void printheap(int a[], int n ) {
	for ( int i = 0 ; i < n ; i++) {
		cout << a[i] << " ";
	}
}


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int arr[] = {12, 11, 13, 5, 6, 7};
	//heap(arr, 6);
	cout << "hello world ";
	// cout << "hello duniya wwalo kyse ho  main thick hun ";





	return 0 ;
}