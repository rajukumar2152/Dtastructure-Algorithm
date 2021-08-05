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
    int D , d , P, Q ;
    cin >> D >> d >> P >> Q ;
    int n = D / d ;
    int ans ;
    if (D % d == 0) {
      ans = D * P + (d * Q * (n - 1) * n) / 2 ;

    }
    else {
      ans = D * P + (d * Q * (n - 1) * n) / 2 + (D % d) * n * Q;
    }
    cout << ans << endl ;


  }
  // cout << "hello world " ;

  return 0 ;
}