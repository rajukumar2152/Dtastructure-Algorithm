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
		vector<pair<int , int>> v ;
		int hdsize , rating  , x , n;
		cin >> n >> x ;

		for (int i = 0 ; i < n ; i++) {
			cin >> hdsize >> rating ;
			v.push_back(make_pair(rating , hdsize ));
		}

		sort(v.begin() , v.end());

		for (int i = n - 1 ; i >= 0 ; i--) {
			if (x >= v[i].second) {
				cout << v[i].first << endl;
				break;
			}
		}

	}

	return 0 ;
}