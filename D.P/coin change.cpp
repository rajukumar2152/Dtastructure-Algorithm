#include <iostream>     // ye unbounde hin kisi ek coin ko ek se jyda bar le sakte hain
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int coincount(int a[], int n , int total ) {
	int matrix[n + 1][total + 1];

	for (int i = 0 ; i < n ; i++) {
		// ;matrix[i][0]=0
		for (int j = 0; j <= total ; j++) {
			if (j == 0)
				matrix[i][0] = 0; //jab sum ka value 0 hain  tab hamee 0 coin chahiye
			else if (i == 0)
				matrix[0][j] = j; // jab  coin ka value coin ka value 0 hai
			else if (j >= a[i]) {
				matrix[i][j] = min(matrix[i - 1][j] , 1 + matrix[i][j - a[i]]);
			}
			else
				matrix[i][j] = matrix[i - 1][j];

			cout << matrix[i][j] << " ";

		}


		cout << endl;
	}
	return matrix[n - 1][total];
}

int main() {
	int arr[] = {2, 3};
	int m = sizeof(arr) / sizeof(arr[0]);
	int total = 17;
	;
	//cout <<"minimum count total  " <<coincount(arr, m, total );
	coincount(arr , m , total);
	return 0;

}
//op is 8

