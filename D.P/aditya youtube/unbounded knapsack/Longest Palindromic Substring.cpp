#include <bits/stdc++.h>
using namespace std;

int longstplandromsubstring(string str , int n ) {
	int dp[n][n];
	memset(dp , 0 , sizeof(dp))
	for (int i = 0 ; i < n ; i++) {
		dp[i][i] = 1 ;
	}
	int maxsize = 1 ;
	for (int i = 0 ; i < n - 1 ; i++) {
		if (str[i] == str[i + 1]) {
			dp[i][i + 1] = 1 ;
		}
		maxsize = 2 ;
	}
	for (int i = 2  ; i < n - 1  ; i++) {
		for (int j = 0 ; j <= i ; j++) {
			if (str[j] == str[i] && dp[i + 1][j - 1] == 1) {
				dp[i][j] = 1 ;
				ans = i ;  // samjh nahi aa raha hain thora sa kahin gadbad ho rhaha hain

			}
		}

	}
}

int main() {

	cout << "hello world ";
	return 0 ;
}