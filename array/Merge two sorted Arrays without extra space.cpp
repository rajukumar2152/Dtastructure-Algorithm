# include <bits/stdc++.h>
using namespace std;


void merge(int arr1[], int arr2[], int n, int m)
{
	int x = n - 1, y = 0;
	while (x >= 0 && y < m) {
		if (arr1[x] >= arr2[y]) {
			swap(arr1[x] , arr2[y]);
			x--;                // this will accept by gfg
			y++;
		}
		else {
			x--;
		}
	}
	sort(arr1 , arr1 + n);
	sort(arr2 , arr2 + m);
}

void mergesortedarray(int a[] , int b[] , int n , int m ) {

	int i = 0 , j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j])
			i++ ;
		else
			swap(a[i] , b[j]);
		sort(a , a + n)   ;// yaha sort karna hain . fir dubara compare karana  hain
		sort(b , b + m);
		// wase ye bhi sahi hain par gfg me tle aa raha hain
	}
	return ;
}

int main() {


	int ar1[] = {1, 5, 9, 10, 15, 20};
	int ar2[] = {2, 3, 8, 13};
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	// mergesortedarray(ar1, ar2, m, n);
	merge(ar1, ar2, m, n);

	cout << "After Merging First Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
	cout << "Second Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}