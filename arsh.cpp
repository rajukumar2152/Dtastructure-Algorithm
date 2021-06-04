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
	while (larg != i) {
		swap(a[larg], a[i]);
		heapify(a, n, larg);
	}
}
void heap (int a[], int n ) {
	for (int i = n - 1 ; i >= 0; i++) {
		if (a[i] > a[(n - 1) / 2]) {
			swap(a[i], a[(n - 1) / 2]);
		}
		heap(a, (n - 1) / 2);
	}


}


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int arr[] = {12, 11, 13, 5, 6, 70 };
	heapify(arr, 6, 2);
	for (int i = 0 ; i < 6; i++) {
		cout << arr[i] << " ";
	}



	return 0 ;
}