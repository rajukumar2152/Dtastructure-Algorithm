# include <bits/stdc++.h>// recursion +memorization 
using namespace std;  // thora sa gadbad  ho raha hain
// #define W 50   // recursion wla bilkul sahi run kar raha hain
// #define n 3      // uske liye recursin walle folder me dekh
// int  t[10][10];
// for (int i = 0 ; i < 10 ; i++) {
// 	for (int j = 0 ; j < 10; j++) {
// 		t[i][j] = -1;
// 	}
// }
// int t[10][10];
// int knapsack1(int wt[] , int val[],int W , int n ){

// 	for(int i=0 ; i<n ; i++){
// 		for (int j=0 ; j<n ; j++){
// 			t[i][j]=-1;
// 		}
// 	}
// 	return knapsack(wt , val , W, n , t);
// }

int t[1000][1000];
// memset(t,-1, sizeof(t));
int knapsack(int wt[] , int val[] , int W , int n ) {
	// int  t[W][n];
	// for (int i = 0 ; i < W ; i++) {
	// 	for (int j = 0 ; j < n; j++) {
	// 		t[i][j] = -1;
	// 	}
	// }

	if (n == 0 || W == 0)
		return 0 ;
	if (t[W][n] != -1)
		return t[W][n];
	if (wt[n - 1] <= W) { // wegight W se chotaa hain hain to hum max of jab us value ko lage and jab nahi lenge

		return t[W][n] = max(val[n - 1] + knapsack(wt , val, W - wt[n - 1], n - 1), knapsack(wt , val , W, n - 1 ));

	}
	else
		return t[W][n] =  knapsack(wt, val, W, n - 1);

}

int main() {
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	// int W = 50;


	int t[5][5];
	memset(t, -1, sizeof(t));
	// int n = sizeof(val) / sizeof(val[0]);
	cout << knapsack(wt, val, 3, 3 ) << "HELLO WORLD ";
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3 ; j++) {
			cout << t[i][j] << " " ;
		}
		cout << endl ;
	}
	cout << t[3][3];

	return 0;
}


