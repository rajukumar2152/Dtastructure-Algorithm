#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define int             long long

int32_t main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t ;
  cin >> t ;


  while (t--) {
    int x1 , x2 , y1, y2, z1, z2 ;
    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

    if (x2 >= x1 && y2 >= y1 && z2 <= z1) {
      cout << "YES" << endl ;
    }
    else {
      cout << "NO" << endl ;
    }


  }
  // cout << "hello world "  ;

  return 0 ;
}