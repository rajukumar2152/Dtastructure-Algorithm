#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>

using namespace std;


int main() {
	int stages = 4;
	int n = 8; // node
	int cost[9];
	int d[9];
	int c[9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 2, 1, 3, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 2, 3, 0, 0},
		{0, 0, 0, 0, 0, 6, 7, 0, 0},
		{0, 0, 0, 0, 0, 6, 8, 9, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 6},
		{0, 0, 0, 0, 0, 0, 0, 0, 4},
		{0, 0, 0, 0, 0, 0, 0, 0, 5},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
	};
	cost[n] = 0;
	for (int i = n - 1; i <= 1; i--) {
		int min = 65545;
		for (int k = i + 1 ; k < n ; k++) {
			if (c[i][k] != 0 && c[i][k] + cost[k] < min) {
				min = c[i][k] + cost[k];
				d[i] = k;
			}
			//cost[i] = min ;
		}
		//cost[i] = min ;


	}
	int p[4]  ;
	p[4] = n;
	p[1] = 1;
	// for (int i = 2; i < 4 ; i++) {
	// 	p[i] = d[p[i - 1]];
	//cout << p[i] << " " ;


	// }
	for (int i = 0 ; i < 5; i++) {
		cout << cost[i] << " ";
	}
//	cout << cost[2];



	return 0 ;
}