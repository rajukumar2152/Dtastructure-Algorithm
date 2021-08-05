// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;   // baki code sahi hain geek for geeks not accepting

// } Driver Code Ends
class Solution {  // geek for geeks solution accept nahi kar rhain baki
	// solution accept nahi ho rahaa hain baki sahi  hain
public:

	int minimumCostPath(vector<vector<int>>& grid) {
		// vector<vector<int>> dp ;
		int n = grid[0].size();
		int dp[n][n];

		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < n ; j++) {
				dp[i][j] = INT_MAX ;
			}
		}
		dp[0][0] = grid[0][0];
		for (int i = 1 ; i < n ; i++) {
			dp[0][i] = dp[0][i - 1] + grid[0][i];
		}
		for (int i = 1 ; i < n ; i++) {
			dp[i][0] = grid[i][0] + dp[i - 1][0];
		}

		for (int i = 1 ; i < n ; i++) {
			for (int j = 1 ; j < n ; j++) {
				dp[i][j] = grid[i][j] + min(dp[i][j - 1]  , dp[i - 1][j]);

			}
		}

		return dp[n - 1][n - 1];
	}
};

// { Driver Code Starts.
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends



//LEETCODE
// 64. Minimum Path Sum

// BILKUL SAHI RUN KAR RAHA HAIN
class Solution {
public:

	int minPathSum(vector<vector<int>>& grid) {
		int row = grid.size() ;  // is se row pata chal jayega
		int column = grid[0].size() ;  // isss se column pata chal jayega

		int  dp[row][column] ;
		dp[0][0] = grid[0][0] ;  // first ko fill kar do
		for (int j = 1 ; j < column ; j++) {
			dp[0][j] = dp[0][j - 1] + grid[0][j] ;  // loop laha first row and first
		}                         // colun ko fill kar do
		for (int i = 1 ; i < row ; i++) {
			dp[i][0] = dp[i - 1][0] + grid[i][0] ;
		}

		for (int i = 1 ; i < row ; i++) {   // bakio ko liye  chek ko min of left wala ya
			for (int j = 1 ; j < column ; j++) {  // right wala
				dp[i][j]  = grid[i][j] + min(dp[i - 1][j] , dp[i][j - 1]);
			}
		}

		return dp[row - 1][column - 1] ;
	}

};