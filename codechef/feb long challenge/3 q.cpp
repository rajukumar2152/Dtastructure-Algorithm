#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int helper(int w[] , int l[] , int n  ) {
  vector<pair<int , int>> v ;
  for (int i = 0 ; i < n ; i++) {
    v.push_back(make_pair(w[i] , l[i]));
  }
  sort(v.begin() , v.end());
  int x = v[0].first;
  int y = v[0].second;
  // int d=0 ;
  int count = 0;
  for (int i = 1 ; i < n ; i++) {
    // int x = v[i].first;
    // int y = v[i].second ;
    if (v[i].second <= y) {
      int d = v[i].second;
      while (v[i].second <= y) {
        v[i].second = v[i].second + d;
        count = count + 1;
      }
      d = 0 ;
    }
    x = v[i].first;
    y = v[i].second ;
  }
  return count ;
}

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    int n  ;
    cin >> n ;
    int w[n];
    for (int i = 0 ;  i < n ; i++) {
      cin >> w[i];
    }
    int l[n];
    for (int i = 0 ; i < n ; i++) {
      cin >> l[i];
    }
    cout << helper(w, l , n ) << endl ;

  }
  return 0 ;
}
