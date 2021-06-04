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
    int n  ;
    cin >> n ;
    int a[n];
    for (int i = 0 ;  i < n ; i++) {
      cin >> a[i];
    }
    sort(a , a + n );
    int x , y , z ;

    x = a[0];
    z = a[n - 1];

    int yindex = 1 ;
    if (x == z) {
      cout << 0 << endl ;
    } else {

      while ( a[yindex] == a[0]) {
        yindex = yindex + 1;
      }
      y = a[yindex];
      int res = abs(x - y) + abs(y - z) + abs(z - x);
      cout << res << endl ;


    }

  }
  return 0 ;
}
