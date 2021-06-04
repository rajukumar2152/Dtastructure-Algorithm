#include <iostream>
#include <cstdlib>        // nahi haua haun baad  me dekhta hun 
#include <bits/stdc++.h>
using namespace std;
// #define int             long long

bool is_safe(int x , int y   ) {
	if (x > 3 || y > 3)
		return false ;
	else return true ;
}

int count_lon_path(int Mat[3][3] ,  int x , int y ) {
	if (Mat[x] <= Mat[y]) {
		return 0 ;
	}


	is_safe( x, y ) {
		int left = 1 +  count_lon_path(Mat ,  x ,  y - 1 );
		int right = 1 +  count_lon_path(Mat ,  x , y + 1 ) ;
		int up = 1 + count_lon_path(Mat ,  x - 1 , y ) ;
		int down = 1 +  count_lon_path(Mat ,  x + 1 , y ) ;
	}
	return max(left , right   , up , down ) ;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int   n , m ;
	cin >> n >> m ;
	int Mat[n][m];
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < m ; j++) {
			cin >> Mat[i][j] ;
		}
	}
	cout << count_lon_path(Mat , 0 , 0) << endl ;
//

	return 0 ;

}