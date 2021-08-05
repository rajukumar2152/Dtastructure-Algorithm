# include <bits/stdc++.h>
using namespace std;
void setmatrix(int matrix[3][3], int n , int m ) {
	int a[n];
	int b[m];
	for (int i = 0; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			if (matrix[i][j] == 0) {
				a[i] = 0;
				b[j] = 0;
			}
		}
	}
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			if (a[i] == 0) {
				matrix[i][j] = 0;
			}
		   if(b[j]==0){
		   	matrix[i][j]=0;
		   }

		}
	}

	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl ;
	}
}


int main() {
	int a[3][3] = {{1, 0, 1},
		{1, 1, 1},
		{1, 1, 1}
	};

	setmatrix(a, 3, 3);

	return 0  ;

}
