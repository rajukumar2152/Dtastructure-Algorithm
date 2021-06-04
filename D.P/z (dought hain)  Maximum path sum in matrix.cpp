#include <bits/stdc++.h>
#define N 4   // thora sa dought hain pata nahi kyse hoga 
#define M 6
using namespace std;

void findMaxPath(int mat[][M]) {
	int dp[N][M];
	vector<pair<int , int>> v ;
	for (int i = 0 ; i < M ; i++) {
		v.push_back(make_pair(mat[0][i], i));
		dp[0][i] = mat[0][i];
	}
	int max_index_in_first_row ;
	sort(v.begin() , v.end());

	max_index_in_first_row = v[M - 1].second;
	// cout << v[i].first << "-" << v[i].second << endl ;

	for (int i = 1 ; i < N - 1 ; i++) {
		for (int j = 0 ; j <= max_index_in_first_row ; j++) {
			dp[i]
		}
	}
}


int main()
{

	int mat1[N][M] = { { 10, 10, 2, 0, 20, 4 },
		{ 1, 0, 0, 30, 2, 5 },
		{ 0, 10, 4, 0, 2, 0 },
		{ 1, 0, 2, 20, 0, 4 }
	};

	findMaxPath(mat1) << endl;
	cout << "hello world ";
	return 0;
}