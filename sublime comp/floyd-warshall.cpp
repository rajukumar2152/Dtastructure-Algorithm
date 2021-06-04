///sahin run kar raha hain

#include<iostream>
#include<cstring>
#include<queue>
#include <unordered_map>
#include<list>

using namespace std;

int main() {
	int a[4][4] =
	{	{0, 3, 100, 7},
		{8, 0, 2, 100},
		{5, 100, 0, 1},
		{2, 100, 100, 0},
	};
	for (int k = 0 ; k < 4 ; k++) {
		for (int i = 0 ; i < 4 ; i++) {
			for ( int j = 0 ; j < 4; j++) {
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]); // k is intermediate yaha se hokar jana ahai
				//

			}

		}
		//cout << a[i][j] << " ";
	}
	for (int i = 0 ; i < 4 ; i++) {
		for ( int j = 0 ; j < 4; j++) {
			cout << a[i][j] << " ";


		}
		cout << endl ;

	}







	return 0 ;
}






