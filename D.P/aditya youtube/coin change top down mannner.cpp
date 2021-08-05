#include <iostream>
#include <cstdlib>   // sab kuch ssahi likha hain par pata nahi kaha gadbad ho raha hain 
#include<climits>
#include <bits/stdc++.h>
using namespace std;
// int ans = INT_MAX;
int coinchangebotmup(int a[] , int size , int N , int dp[]) {
	// base case
	if (size == 0) {
		return 0 ; // matalab array khali  hain usme koi coin nahi hain
	}
	if (dp[N] != 0) {
		return dp[N];
	}
	int ans = INT_MAX;

	for (int i = 0 ; i < size ; i++) {
		if (N - a[i] >= 0) {
			int subproblem = coinchangebotmup(a , size , N - a[i] , dp) + 1  ;
			ans = min(ans , subproblem ) ;
		}

	}
	dp[N] = ans ;
	return  dp[N];

}

int main() {
	int N = 15 ;
	int a[] = {1, 2, 10};
	int dp[100] = {0};
	cout << coinchangebotmup(a ,  3 , 15 , dp) << endl ;

	return 0 ;
}


// by dynamic programming
class Solution {
public:
	int coinChange(vector<int>& coins, int amount) {
		int n = coins.size();
		vector<vector<long long>>dp(n + 1, vector<long long>(amount + 1));
		for (int i = 0; i <= n; i++)
			dp[i][0] = 0;
		for (int j = 1; j <= amount; j++)
			dp[0][j] = INT_MAX; // jab coins hi nahi hain tab int-max le liya

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= amount; j++)
			{
				if (coins[i - 1] > j)
					dp[i][j] = dp[i - 1][j];
				else
					dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
			}
		}
		return dp[n][amount] == INT_MAX ? -1 : dp[n][amount];
	}
};


