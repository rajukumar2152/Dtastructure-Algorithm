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
  int n , h , x ;
  cin >> n >> h >> x;
  int a[n];
  for (int i = 0 ; i < n ; i++) {
    cin >> a[i];
  }
  bool check = false ;
  if (x >= h) {
    cout << "YES" << endl;
  }
  int differ = abs(h - x);
  for (int i = 0 ; i < n ; i++) {
    if (a[i] == differ) {
      // cout << "YES" << endl ;
      check = true;
      break ;
    }
  }
  if (check == true)
    cout << "YES" << endl ;
  else
    cout << "NO" << endl ;


  return 0 ;
}
