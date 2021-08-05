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
	int n , initial;
	cin >> n ;
	cin >> initial ;
	int a[n]  , b[n] ;

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i] ;
	}
	for (int j = 0 ; j < n ; j++) {
		cin >> b[j]  ;
	}

	vector<pair<int , int>> v ;

	for (int i = 0 ; i < n ; i++) {
		v.push_back(make_pair(a[i] , b[i])) ;
	}
	sort(v.begin() , v.end()) ;
	int cnt = 0 ;
	for (int i = 0 ; i < n ; i++) {
		if (initial >= v[i].first) {
			initial = initial + v[i].second  ;
			cnt = cnt + 1 ;
		}
	}

	cout << cnt << endl ;

	return 0 ;
}