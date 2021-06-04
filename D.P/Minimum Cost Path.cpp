#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h> // gfg me accept nahi ho raha hain 
using namespace std;
// #define int             long long

// acction plan how to
int helper(vector<vector<int>> &grid , vector<vector<int>> &sol , int n , int x , int y ) {
	if (x == n - 1 && y == n - 1)
		return grid[x][y];
	if (sol[x][y] != -1)
		return sol[x][y];
	if (x >= n || y >= n) //(i,j-1), (i, j+1), (i-1, j), (i+1, j).
		return INT_MAX;
	int left = grid[x][y] + helper(grid , sol , n , x , y - 1);
	int right = grid[x][y] + helper(grid , sol , n , x, y + 1);
	int up = grid[x][y] + helper(grid , sol , n , x - 1 , y);
	int down = grid[x][y] + helper(grid , sol , n , x + 1, y );

	int p = min(left , right);
	int  q = min(p , up);
	int r = min(q, down);

	return sol[x][y] = r ;


}
int minimumCostPath(vector<vector<int>>& grid) {
	int n = grid.size();
	vector<vector<int>> sol;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j, n ; j++) {
			sol[i][j] = -1;
		}
	}
	return  helper(grid , sol , n , 0 , 0 );

}


int main() {

	return 0 ;
}

