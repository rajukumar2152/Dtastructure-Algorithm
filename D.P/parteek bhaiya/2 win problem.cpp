#include <iostream>
#include <cstdlib>
#include<climits>
#include <bits/stdc++.h>
using namespace std;

int  maxprofit(int p[] , int i , int j , int y , int dp[][100] ) {
	// recursevely solve
	if (i > j) {
		return 0 ; // base case
	}
	if (dp[i][j] != 0) {
		return dp[i][j];
	}
	// return max(p[i] * y + maxprofit(p , i + 1 , j , y + 1) , p[j] * y + maxprofit(p , i , j - 1 , y + 1));
	//sahi run kar raha hain recursive solution


	// ye dp se ho gaya  hain yaha time complexity (O(n^2)) hain ..
	dp[i][j] =  max(p[i] * y + maxprofit(p , i + 1 , j , y + 1, dp) , p[j] * y + maxprofit(p , i , j - 1 , y + 1 , dp));
	return dp[i][j];
}

int main() {
	int price[] = {2, 3, 5, 1, 4};
	int i = 0 ;
	int dp[100][100] = {0};
	int j = sizeof(price) / sizeof(price[0]) - 1;
	cout << maxprofit(price , i , j , 1 , dp) << endl ;

	return 0 ;
}

