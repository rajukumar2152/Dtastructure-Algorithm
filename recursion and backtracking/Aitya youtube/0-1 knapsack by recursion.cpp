# include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[] , int val[] , int W , int n) {
	if (n == 0 || W == 0)
		return 0 ;
	if (wt[n - 1] <= W) { // wegight W se chotaa hain hain to hum max of jab us value ko lage and jab nahi lenge

		return  max(val[n - 1] + knapsack(wt , val, W - wt[n - 1], n - 1), knapsack(wt , val , W, n - 1));

	}
	else
		return knapsack(wt, val, W, n - 1); // wt given W se juda aata hain to
	//uss element ko lo hi nahi
}

int main() {
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int W = 50;


	int n = sizeof(val) / sizeof(val[0]);
	cout << knapsack(wt, val, W, n) << "HELLO WORLD ";
	return 0;
}