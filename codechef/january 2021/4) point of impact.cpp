#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t ;
	cin >> t ;


	while (t--) {
		int n , k  , x , y;
		cin >> n >> k >> x >> y;
		vector<pair<int , int >> v;
		int c ;
		if (x == y) {
			cout << n << " " << n << endl ;
		}
		else if (y > x) {
			c = y - x;
			y = n;
			x = y - c;
			v.push_back(make_pair(x, y));
			v.push_back(make_pair(y, x));
			v.push_back(make_pair(y - x , 0));
			v.push_back(make_pair(0, y - x));
		}
		else {
			c = y - x;
			x = n;
			y = x + c;
			v.push_back(make_pair(x, y));
			v.push_back(make_pair(y, x));
			v.push_back(make_pair(0 , x - y));
			v.push_back(make_pair( x - y , 0));
		}
		int z = k % 4;
		if (z == 0 && v.size() > 0) {
			cout << v[3].first << " " << v[3].second << endl;
		}
		if (z > 0 && z < 4 && v.size() > 0) {
			cout << v[z - 1].first << " " << v[z - 1].second << endl ;
		}

	}

	return 0;
}

// //input
// 3
// 5 5 4 4
// 8 5 1 2
// 5 2 3 1

// //output
// 5 5
// 7 8
// 3 5
