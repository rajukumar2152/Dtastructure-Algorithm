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
    int l , r ;
    cin >> l >> r;
    int n = abs( r - l) + 1 ;
    // if (n == 0) {
    //   cout << 1 << endl;
    // } else if (n == 1) {
    //   cout << 3 << endl;
    // } else {

    // cout << n << "raju" << endl;
    cout << (n * (n + 1)) / 2 << endl;
    // }
  }
  return 0 ;
}
