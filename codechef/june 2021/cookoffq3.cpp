#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // int t ;
  // cin >> t ;


  // while (t--) {
  int n , q , x;
  cin >> n >> q;
  int a[n] ;
  for (int i = 0 ; i < n ; i++) {
    cin >> a[i] ;
  }
  // b[q] ;
  int ans = 1 ;
  while (q--) {

    cin >> x ;
    for (int i = 0 ; i < n ; i++) {
      ans = ans * (x - a[i]);
    }
    if (ans > 0 ) {
      cout << "POSITIVE" << endl ;
    }
    else  if (ans < 0) {
      cout << "NEGATIVE" << endl;
    } else {
      cout << "0" << endl;
    }

  }
  // }


  return 0 ;
}